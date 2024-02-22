#ifndef CONVERTER_CONVERTERMETRTOMILE_H
#define CONVERTER_CONVERTERMETRTOMILE_H

#include "UnitConverter.h"
#include "AbstractUnitConverter.h"
#include "Metr.h"

class ConverterMetrToMile : public AbstractUnitConverter {
private:
    static double RATIO;

public:
    ConverterMetrToMile(const Metr *metr) : AbstractUnitConverter(RATIO) {
        converter = new UnitConverter((Unit *) metr, ratio);
    }
};

double ConverterMetrToMile::RATIO = 1 / 1609.34;


#endif //CONVERTER_CONVERTERMETRTOMILE_H
