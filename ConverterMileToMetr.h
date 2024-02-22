#ifndef CONVERTER_CONVERTERMILETOMETR_H
#define CONVERTER_CONVERTERMILETOMETR_H


#include "UnitConverter.h"
#include "Mile.h"

#include "AbstractUnitConverter.h"

class ConverterMileToMetr : public AbstractUnitConverter {
private:
    static double RATIO;

public:
    ConverterMileToMetr(const Mile *mile) : AbstractUnitConverter(RATIO) {
        converter = new UnitConverter((Unit *) mile, ratio);
    }
};

double ConverterMileToMetr::RATIO = 1609.34;


#endif //CONVERTER_CONVERTERMILETOMETR_H
