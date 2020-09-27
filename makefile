all:
	g++ -o protoTool -I./lib -I./lib/jsoncpp/include *.cpp  lib/base64/*.cpp -lprotobuf  proto/*.cc -lpthread  lib/jsoncpp/src/lib_json/*.cpp

