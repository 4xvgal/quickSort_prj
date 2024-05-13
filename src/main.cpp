#include<iostream>
#include<fstream>
#include<vector>

#include "RealRandom/realRandom_urandom.hpp" // 랜덤 숫자 생성기
#include "QuickSortPivot/QuickSortPivot.hpp" // 퀵소트 클래스
#include "Measuretime/MeasureTime.hpp" // 시간 측정 클래스

using namespace std;

// 랜덤 배열 생성후 반환
int* makeRandomArray(int size){
  int* arr = new int[size];
  realRandom_urandom rand;
  for(int i=0; i<size; i++){
    arr[i] = rand.getRand() % 100000;
  }
  return arr;
}
// 오름차순 배열 생성후 반환
int* makeSortedArray(int size){
  int* arr = new int[size];
  for(int i=0; i<size; i++){
    arr[i] = i;
  }
  return arr;
}
// 내림차순 배열 생성후 반환
int* makeSortedReverseArray(int size){
  int* arr = new int[size];
  for(int i=0; i<size; i++){
    arr[i] = size-i;
  }
  return arr;
}

int main(){
  
  // Pivot : FIRST, END, MIDDLE, RANDOM
  // Dataset : ASCENDING, DESCENDING, RANDOM

  
  // 배열 크기
  int arr_size = 100000;
  // 배열 준비 
  int* arr_random = makeRandomArray(arr_size);
  int* arr_temp = new int[arr_size];

  // 테스트 시작
  cout << "Test Started" << endl;
  cout << "Array Size : " << arr_size << endl; 
  cout << "============================================" << endl;

  // Pivot : FIRST , Dataset : Ascending
  arr_temp = makeSortedArray(arr_size); // 오름차순 배열 생성
  QuickSortPivot quickSortPivot_first(arr_temp, arr_size); // 퀵소트 객체 생성
  MeasureTime measureTime; // 시간 측정 객체 생성
  measureTime.startMeasure(); // 시간 측정 시작
  quickSortPivot_first.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::FIRST); // 퀵소트 실행
  measureTime.endMeasure(); // 시간 측정 종료
  cout << "PivotMode : FIRST, DATASET : ASCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl; // 시간 출력
  delete [] arr_temp; // 배열 메모리 해제

  // Pivot : FIRST , Dataset : Descending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedReverseArray(arr_size);
  QuickSortPivot quickSortPivot_reverse_first(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_reverse_first.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::FIRST);
  measureTime.endMeasure();
  cout << "PivotMode : FIRST, DATASET : DESCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : FIRST , Dataset : Random
  arr_temp = new int[arr_size];
  for(int i=0; i<arr_size; i++){
    arr_temp[i] = arr_random[i];
  }
  QuickSortPivot quickSortPivot_random_first(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_random_first.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::FIRST);
  measureTime.endMeasure();
  cout << "PivotMode : FIRST, DATASET : RANDOM, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  cout << "============================================" << endl;
  // Pivot : END , Dataset : Ascending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedArray(arr_size);
  QuickSortPivot quickSortPivot_end(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_end.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::END);
  measureTime.endMeasure();
  cout << "PivotMode : END, DATASET : ASCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : END , Dataset : Descending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedReverseArray(arr_size);
  QuickSortPivot quickSortPivot_reverse_end(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_reverse_end.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::END);
  measureTime.endMeasure();
  cout << "PivotMode : END, DATASET : DESCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : END , Dataset : Random
  arr_temp = new int[arr_size];
  for(int i=0; i<arr_size; i++){
    arr_temp[i] = arr_random[i];
  }
  QuickSortPivot quickSortPivot_random_end(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_random_end.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::END);
  measureTime.endMeasure();
  cout << "PivotMode : END, DATASET : RANDOM, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;
  cout << "============================================" << endl;

  // Pivot : MIDDLE , Dataset : Ascending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedArray(arr_size);
  QuickSortPivot quickSortPivot_middle(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_middle.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::MIDDLE);
  measureTime.endMeasure();
  cout << "PivotMode : MIDDLE, DATASET : ASCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : MIDDLE , Dataset : Descending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedReverseArray(arr_size);
  QuickSortPivot quickSortPivot_reverse_middle(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_reverse_middle.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::MIDDLE);
  measureTime.endMeasure();
  cout << "PivotMode : MIDDLE, DATASET : DESCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : MIDDLE , Dataset : Random
  arr_temp = new int[arr_size];
  for(int i=0; i<arr_size; i++){
    arr_temp[i] = arr_random[i];
  }
  QuickSortPivot quickSortPivot_random_middle(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_random_middle.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::MIDDLE);
  measureTime.endMeasure();
  cout << "PivotMode : MIDDLE, DATASET : RANDOM, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;
  cout << "============================================" << endl;
  // Pivot : RANDOM , Dataset : Ascending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedArray(arr_size);
  QuickSortPivot quickSortPivot_random(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_random.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::RANDOM);
  measureTime.endMeasure();
  cout << "PivotMode : RANDOM, DATASET : ASCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  // Pivot : RANDOM , Dataset : Descending
  arr_temp = new int[arr_size];
  arr_temp = makeSortedReverseArray(arr_size);
  QuickSortPivot quickSortPivot_reverse_random(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_reverse_random.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::RANDOM);
  measureTime.endMeasure();
  cout << "PivotMode : RANDOM, DATASET : DESCENDING, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;

  
  // Pivot : RANDOM , Dataset : Random
  arr_temp = new int[arr_size];
  for(int i=0; i<arr_size; i++){
    arr_temp[i] = arr_random[i];
  }
  QuickSortPivot quickSortPivot_random_random(arr_temp, arr_size);
  measureTime.startMeasure();
  quickSortPivot_random_random.QuickSortFunc(0, arr_size -1, PivotMode::Pivot::RANDOM);
  measureTime.endMeasure();
  cout << "PivotMode : RANDOM, DATASET : RANDOM, Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr_temp;
  cout << "============================================" << endl; 
  delete [] arr_random;
  return 0;

}

