//랜덤정수 파일을 읽어와 퀵소트로 정렬하는 프로그램
//각 피벗 모드에 따른 걸리는 시간을 비교

#include <iostream>
#include <fstream>
// 라이브러리 추가 
#include "QuickSortPivot/QuickSortPivot.hpp"
#include "MeasureTime/MeasureTime.hpp"

int main(){
  std::ifstream read("bin/random.bin",std::ios::binary);
  
  // Check if the file was successfully opened
  if (!read) {
    std::cout << "Failed to open the file." << std::endl;
    return 1;
  }

  //파일 스트림에서 배열로 변환
  int arr[1000000];
  for(int i=0;i<1000000;i++){
    read.read((char*)&arr[i],sizeof(int));
  }
  read.close();

  //각 피벗 모드에 따른 시간 측정
  MeasureTime mt;

  //pivot mode : first
  //배열 복사
  int arr1[1000000];
  for(int i=0;i<1000000;i++){
    arr1[i] = arr[i];
  }
  QuickSortPivot qsp1(arr1,1000000);
  mt.startMeasure();
  qsp1.QuickSortFunc(0,999999,Pivot::FIRST);
  mt.endMeasure();
  mt.printDuration();
  //객체 해제
  qsp1.~QuickSortPivot();

  



  return 0;
}