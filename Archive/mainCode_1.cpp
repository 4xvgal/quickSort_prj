#include <iostream>

// 내부 라이브러리 import
#include "Measuretime/Measuretime.hpp"       //시간 측정 객체
#include "QuickSort/QuickSort.hpp"           //퀵소트 객체
#include "RealRandom/realRandom_urandom.hpp" //랜덤 생성 객체

#include "QuickSortPivot/QuickSortPivot.hpp" //피벗 선택가능한 퀵소트
using namespace std;
int main() {
  // 라이브러리 객체 생성
  realRandom_urandom r;
  QuickSort *q;
  measureTime m;

  // 프로그램 변수 선언
  int size = 1000000;       // 정렬할 배열의 크기
  int range = 1000000;      // 랜덤한 값의 범위
  int *arr = new int[size]; // 정렬할 배열 생성

  // init
  cout << "---------------------------\n";
  cout << "QuickSorting Test initialed \n";
  cout << "Array Size : " << size << "\n";
  cout << "Range of number : " << range << "\n";
  cout << "---------------------------\n";
  // 실행
  cout << "Randomizing input array \n";
  m.startMeasure();
  for (int i = 0; i < size; i++) {
    arr[i] = r.getRand() % range + 1; // 랜덤값으로 배열 초기화
  }
  m.endEMeasure();
  cout << "Randomizing Duration: " << m.getDuration() << "sec\n";
  cout << "---------------------------\n";

  cout << "Before Sorting sample" << endl;
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << " "; // 랜덤으로 생성된 배열 출력
  }

  q = new QuickSort(arr, size); // 퀵소트 객체 생성
  cout << "\n----------------------------\n";
  cout << "Array Sorting initiated \n";
  cout << "---------------------------\n";
  m.startMeasure(); // 시간 측정 시작

  q->QuickSortFunc(0, size - 1); // 퀵소트 수행

  m.endEMeasure(); // 시간 측정 종료

  cout << endl << "After Sorting sample" << endl;
  cout << "index [0 - size/10000] ";
  for (int i = 0; i <= size / 10000; i++) {
    cout << arr[i] << " ";
  }

  cout << endl
       << "Sorting Duration : " << m.getDuration() << " sec"
       << endl; // 소요시간 출력

  delete q;     // 퀵소트 객체 삭제
  //delete[] arr; // 배열 삭제

  cout << "---------------------\n";
  cout << "pivot test\n";
  cout << "---------------------\n";
  QuickSortPivot *w;
  size = 10;
  range = 10;
  arr = new int[size];

  // randomizing array
  for (int i = 0; i < size; i++) {
    arr[i] = r.getRand() % range + 1;
  }
  // sample printing
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  w = new QuickSortPivot(arr, size);
  w->QuickSortFunc(0, size - 1, Pivot::END); // 퀵 소트 수행

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  delete [] arr;
  delete w;
}
