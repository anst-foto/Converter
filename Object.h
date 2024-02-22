#ifndef CONVERTER_OBJECT_H
#define CONVERTER_OBJECT_H

#include <string>

using namespace std;

class Object {
public:
    virtual string toString() = 0;
};


#endif //CONVERTER_OBJECT_H
