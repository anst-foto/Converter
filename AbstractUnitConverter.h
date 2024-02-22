#ifndef CONVERTER_ABSTRACTUNITCONVERTER_H
#define CONVERTER_ABSTRACTUNITCONVERTER_H


#include "IConvert.h"
#include "UnitConverter.h"

class AbstractUnitConverter : public IConvert {
protected:
    UnitConverter* converter;
    double ratio;

    explicit AbstractUnitConverter(double ratio) : ratio(ratio) {}

public:
    Object *convert() override {
        return converter->convert();
    }
};


#endif //CONVERTER_ABSTRACTUNITCONVERTER_H
