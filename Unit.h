#ifndef CONVERTER_UNIT_H
#define CONVERTER_UNIT_H


#include "Object.h"

class Unit : public Object {
protected:
    double _value;

public:
    Unit(double value) {
        if (value < 0) {
            _value = 0;
        } else {
            _value = value;
        }
    }

    double getValue() const {
        return _value;
    }

    string toString() override {
        return std::string();
    }
};


#endif //CONVERTER_UNIT_H
