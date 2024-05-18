//MeasureTime.hpp
#pragma onces
#include<ctime>

//시간 측정을 위한 클래스
class MeasureTime{
private:
    clock_t start, finish;
    double duration;
public:
    void startMeasure();
    void endMeasure();
    
    void printDuration();
    double getDuration();
    double getMsDuration();
};