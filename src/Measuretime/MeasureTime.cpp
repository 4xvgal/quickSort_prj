//MeasureTime.cpp
#include "MeasureTime.hpp"
#include<iostream>

//measureTime 구현부
//측정 시작 함수
void MeasureTime::startMeasure(){
    start = clock();
}
//측정 종료 함수
void MeasureTime::endMeasure(){
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    //std::cout << duration << " sec" << std::endl;
}
//시간 출력 함수
void MeasureTime::printDuration() 
{
    std::cout << duration << " sec" << std::endl;
}

//시간 반환 함수
double MeasureTime::getDuration()
{
    return duration;
}

double MeasureTime::getMsDuration()
{
    return duration * 1000;
}