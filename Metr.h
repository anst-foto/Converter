#ifndef CONVERTER_METR_H
#define CONVERTER_METR_H

#include "Unit.h"

class Metr : public Unit{

public:
    explicit Metr(double value) : Unit(value) {}

    string toString() override {
        return "Metr: " + to_string(_value);
    }
};


#endif //CONVERTER_METR_H
