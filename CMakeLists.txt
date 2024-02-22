cmake_minimum_required(VERSION 3.27)
project(Converter)

set(CMAKE_CXX_STANDARD 17)

add_executable(Converter main.cpp
        Object.h
        IConvert.h
        Metr.h
        Mile.h
        Unit.h
        ConverterMileToMetr.h
        UnitConverter.h
        ConverterMetrToMile.h
        AbstractUnitConverter.h)
