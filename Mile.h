#ifndef CONVERTER_MILE_H
#define CONVERTER_MILE_H


#include "Unit.h"

class Mile : public Unit {
public:
    explicit Mile(double value) : Unit(value) {}

    string toString() override {
        return "Mile: " + to_string(_value);
    }
};


#endif //CONVERTER_MILE_H
