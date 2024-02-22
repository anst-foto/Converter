#ifndef CONVERTER_UNITCONVERTER_H
#define CONVERTER_UNITCONVERTER_H

#include "IConvert.h"
#include "Unit.h"

class UnitConverter : public IConvert {
protected:
    Unit* unit;
    double ratio;
public:
    UnitConverter(Unit *unit, double ratio) : unit(unit), ratio(ratio) {}

    Object *convert() override {
        return new Unit(unit->getValue() * ratio);
    }
};


#endif //CONVERTER_UNITCONVERTER_H
