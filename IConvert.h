#ifndef CONVERTER_ICONVERT_H
#define CONVERTER_ICONVERT_H

#include "Object.h"

class IConvert {
public:
    virtual Object* convert() = 0;
};


#endif //CONVERTER_ICONVERT_H
