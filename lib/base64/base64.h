//
// Created by can on 2020/9/13.
//

#ifndef PROTOTOOL_BASE64_H
#define PROTOTOOL_BASE64_H
#include <vector>
#include <string>
typedef unsigned char BYTE;

std::string base64_encode(BYTE const* buf, unsigned int bufLen);
std::vector<BYTE> base64_decode(std::string const&);
#endif //PROTOTOOL_BASE64_H
