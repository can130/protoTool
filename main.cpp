#include <iostream>
#include <getopt.h>
#include <fstream>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>
#include <google/protobuf/compiler/importer.h>
#include "base64/base64.h"
#include "json/json.h"

using namespace std;
using namespace google;

static struct option long_options[] = {
        {"pbfile", required_argument, 0, 0},
        {"msgname", required_argument, 0, 0},
        {"out", optional_argument, 0, 0},
        {"data", optional_argument, 0, 0},
        {0, 0, 0, 0}
};

void PrintHelp(char **argv)
{
    cout<<"usage:"<<endl;
    cout<<argv[0]<<" --pbfile=proto_file_path --msgname=proto_struct_name --data=base64_pb_data";
    cout<<endl;
}


template <class T>
bool ReadProtoFromFile(const string& file_name, T* message) {
    std::ifstream ifs(file_name, std::ifstream::binary);
    if (!ifs) {
        return false;
    }
    if (!message->ParseFromIstream(&ifs)) {
        return false;
    }
    ifs.close();
    return true;
}


// If the importer encounters problems while trying to import the proto files, it reports them to a MultiFileErrorCollector.
class MyErrorCollector: public protobuf::compiler::MultiFileErrorCollector
{
    virtual void AddError(const std::string & filename, int line, int column, const std::string & message){
        printf("%s, %d, %d, %s\n", filename.c_str(), line, column, message.c_str());
    }
};



Json::Value FieldDescriptor2Json(const protobuf::Message &msg, const protobuf::FieldDescriptor &field)
{

#define GET_FIELD(TYPE_NAME, REFLECTION, MSG, FIELD) \
do {                                                 \
    if((FIELD)->is_repeated()){                        \
        for(int i=0; i<(REFLECTION)->FieldSize(MSG, FIELD); ++i) \
           jRes.append(Json::Value((REFLECTION)->GetRepeated##TYPE_NAME(MSG, FIELD, i))); \
    }                                                \
    else {                                           \
        if((REFLECTION)->HasField(MSG, FIELD)){      \
             jRes = Json::Value((REFLECTION)->Get##TYPE_NAME(MSG, FIELD));     \
        }           \
    }               \
}while(0)

    Json::Value jRes;
    switch (field.cpp_type()) {
        case protobuf::FieldDescriptor::CPPTYPE_INT32:
            GET_FIELD(Int32, msg.GetReflection(), msg, &field);
            break;
          case protobuf::FieldDescriptor::CPPTYPE_INT64:
            GET_FIELD(Int64, msg.GetReflection(), msg, &field);
            break;
           case protobuf::FieldDescriptor::CPPTYPE_UINT32:
            GET_FIELD(UInt32, msg.GetReflection(), msg, &field);
            break;
            case protobuf::FieldDescriptor::CPPTYPE_UINT64:
            GET_FIELD(UInt64, msg.GetReflection(), msg, &field);
            break;
        case protobuf::FieldDescriptor::CPPTYPE_DOUBLE:
            GET_FIELD(Double, msg.GetReflection(), msg, &field);
        case protobuf::FieldDescriptor::CPPTYPE_FLOAT:
            GET_FIELD(Float, msg.GetReflection(), msg, &field);
            break;
            case protobuf::FieldDescriptor::CPPTYPE_BOOL:
            GET_FIELD(Bool, msg.GetReflection(), msg, &field);
            break;
        case protobuf::FieldDescriptor::CPPTYPE_ENUM:
        {
            if(field.is_repeated()) {
                for(int i=0; i<msg.GetReflection()->FieldSize(msg, &field); ++i) {
                    jRes.append(Json::Value(msg.GetReflection()->GetRepeatedEnumValue(msg, &field, i)));
                }
            }
            else{
                if(msg.GetReflection()->HasField(msg, &field)) {
                    jRes = Json::Value(msg.GetReflection()->GetEnumValue(msg, &field));
                }
            }
        }
            break;
        case protobuf::FieldDescriptor::CPPTYPE_STRING:
            GET_FIELD(String, msg.GetReflection(), msg, &field);
            break;
        case protobuf::FieldDescriptor::CPPTYPE_MESSAGE:
        {
            if(field.is_repeated()){
                for(int i=0; i<msg.GetReflection()->FieldSize(msg, &field); ++i) {
                    Json::Value jTmp;
                    const protobuf::Message &newMsgRoot =  msg.GetReflection()->GetRepeatedMessage(msg, &field, i);
                    const protobuf::Descriptor* desc = newMsgRoot.GetDescriptor();
                    for(int j=0;j<desc->field_count(); ++j)
                    {
                        const protobuf::FieldDescriptor *newField = desc->field(j);
                        jTmp[newField->name()] = FieldDescriptor2Json(newMsgRoot, *newField);;
                    }
                    jRes.append(jTmp);
                }
            }
            else {
                if(msg.GetReflection()->HasField(msg, &field))
                {
                    const protobuf::Message &newMsg =  msg.GetReflection()->GetMessage(msg, &field);
                    const protobuf::Descriptor* desc =newMsg.GetDescriptor();
                    jRes = Json::Value(Json::objectValue);
                    for(int i=0;i<desc->field_count(); ++i)
                    {
                        const protobuf::FieldDescriptor *newField = desc->field(i);
                        jRes[newField->name()] = FieldDescriptor2Json(newMsg, *newField);;
                    }
                }
            }
        }
        break;
        default:
//            cout<<"unmatch "<<field.type_name()<<endl;
            break;
    }
    return jRes;
#undef GET_FIELD

}

Json::Value ConvertIntoJson(const protobuf::Message &msg)
{
    Json::Value jRes;
    const protobuf::Descriptor* desc =msg.GetDescriptor();
    for(int i=0;i<desc->field_count(); ++i)
    {
        const protobuf::FieldDescriptor *field = desc->field(i);
        jRes[field->name()] = FieldDescriptor2Json(msg, *field);
    }
    return jRes;
}



int main(int argc, char** argv) {

    string namePbfile;  //pb file name
    string outFile; //out file
    string msgName; //msgname
    string pbBase64; //msgname

    // parse input
    {
        int opt;
        int option_index = 0;
        while ((opt = getopt_long(argc, argv, "", long_options, &option_index)) !=-1) {
            if(opt==0){
                if(option_index == 0 && optarg) {
                    namePbfile = optarg;
                }
                else if (option_index == 1 && optarg){
                    msgName = optarg;
                }
                else if (option_index == 2 && optarg){
                    outFile = optarg;
                }
                else if (option_index == 3 && optarg){
                    pbBase64 = optarg;
                }
            }
        }
    }

    if(namePbfile.empty() || msgName.empty() || pbBase64.empty()){
        PrintHelp(argv);
        return -1;
    }

    protobuf::compiler::DiskSourceTree diskSourceTree; // An implementation of SourceTree which loads files from locations on disk.
    MyErrorCollector myErrorCollector; // If the importer encounters problems while trying to import the proto files, it reports them to a MultiFileErrorCollector.
    protobuf::compiler::Importer importer(&diskSourceTree, &myErrorCollector); // Simple interface for parsing .proto files.

    size_t iPathIndex = namePbfile.rfind("/");
    if(iPathIndex == string::npos)
    {
        diskSourceTree.MapPath("", "./");  // Map a path on disk to a location in the SourceTree.
        importer.Import(namePbfile); // Import the given file and build a FileDescriptor representing it.
    }
    else
    {
        diskSourceTree.MapPath("", namePbfile.substr(0, iPathIndex)); // Map a path on disk to a location in the SourceTree.
        importer.Import(namePbfile.substr(iPathIndex+1));  // Import the given file and build a FileDescriptor representing it.
    }

    // Find a top-level message type by name. Returns nullptr if not found.
    const protobuf::Descriptor * descriptor = importer.pool()->FindMessageTypeByName(msgName);
    if (!descriptor){
        cout<<msgName<<" not found in protofle"<<endl;
        return -1;
    }

    // create a dynamic message factory
    protobuf::DynamicMessageFactory * factory = new protobuf::DynamicMessageFactory(importer.pool());
    // create a const message ptr by factory method and message descriptor
    const  protobuf::Message * cMsgTmp = factory->GetPrototype(descriptor);

    // create a non-const message object by const message ptr
    // define import error collector
    protobuf::Message * msg = cMsgTmp->New();

//    cout<<msg->GetTypeName()<<endl;
//    cout<<msg->GetDescriptor()->FindFieldByName("len")->type()<<endl;

    vector<BYTE> pbDec = base64_decode(pbBase64);
    string strPbdec;
    strPbdec.append((const char *)pbDec.data(), pbDec.size());


    if(msg->ParseFromString(strPbdec)) {
        Json::Value jRoot = ConvertIntoJson(*msg);

        Json::StreamWriterBuilder writerBuilder;
        std::ostringstream os;
        std::unique_ptr<Json::StreamWriter> jsonWriter(writerBuilder.newStreamWriter());
        jsonWriter->write(jRoot, &os);
        cout << os.str();
    }
    else
    {
        cout<<"parse fail"<<endl;
        return -1;
    }
    return 0;
}