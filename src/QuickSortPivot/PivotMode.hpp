//define pivot mode
#pragma once

#include<iostream>

class PivotMode { 
    public:
        enum class Pivot { FIRST, END, MIDDLE, RANDOM }; // 피벗 모드

        static std::string toString(Pivot mode){
            switch (mode) {
                case Pivot::FIRST: return "FIRST";
                case Pivot::END: return "END";
                case Pivot::MIDDLE: return "MIDDLE";
                case Pivot::RANDOM: return "RANDOM";
                default: return "Unknown";
            }
        }
};