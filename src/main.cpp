#include<iostream>
#include<fstream>
#include<vector>

#include "RealRandom/realRandom_urandom.hpp" // 랜덤 숫자 생성기
#include "QuickSortPivot/QuickSortPivot.hpp" // 퀵소트 클래스
#include "Measuretime/MeasureTime.hpp" // 시간 측정 클래스
#include "QuickSortPivot/Test/QuickSortPivotTester.hpp" // 퀵소트 테스트 클래스
using namespace std;


// 데이터셋 모드
class DataSetMode{
  public:
    enum class DataSetType{
    ASCENDING,
    DESCENDING,
    RANDOM,
    };
    static std::string toString(DataSetType mode){
      switch (mode) {
        case DataSetType::ASCENDING: return "ASCENDING";
        case DataSetType::DESCENDING: return "DESCENDING";
        case DataSetType::RANDOM: return "RANDOM";
        default: return "Unknown";
      }
    }
};

//배열 복사 함수
int * copyArray(int * arr, int size){
  int * copy = new int[size];
  for(int i=0; i<size; i++){
    copy[i] = arr[i];
  }
  return copy;
}

//배열 생성 함수
int * createArray(int size, DataSetMode::DataSetType type){
  int * arr = new int[size];
  switch(type) {
    case DataSetMode::DataSetType::ASCENDING:
      for(int i=0; i<size; i++){
        arr[i] = i;
      }
      return arr;
      break;
    case DataSetMode::DataSetType::DESCENDING:
      for(int i=0; i<size; i++){
        arr[i] = size - i;
      }
      return arr;
      break;
    case DataSetMode::DataSetType::RANDOM:
      realRandom_urandom rand;
      for(int i=0; i<size; i++){
        arr[i] = rand.getRand() % 100000;
      }
      return arr;
      break;
  }
}



//퀵소트 테스트 실행 함수
void runQuickSortTest(int *originalArray, int size, PivotMode::Pivot Pivot, DataSetMode::DataSetType DataSet){
  int * arr = copyArray(originalArray, size);
  QuickSortPivot quickSortPivot(arr, size);
  MeasureTime measureTime;
  measureTime.startMeasure();
  quickSortPivot.QuickSortFunc(0, size - 1, Pivot);
  measureTime.endMeasure();
  cout << "PivotMode : " << PivotMode::toString(Pivot) << ", Dataset : " << DataSetMode::toString(DataSet) << ", Duration : " << measureTime.getMsDuration() << "ms" << endl;
  delete [] arr;
}

int main(){
  //퀵소트 검증
  QuickSortPivotTester tester;
  tester.runTest();
  
  // Pivot : FIRST, END, MIDDLE, RANDOM, MEDIAN
  // Dataset : ASCENDING, DESCENDING, RANDOM

  // 배열 크기
  int arr_size = 100000;
  // 배열 준비 
  int * arr_ascending = createArray(arr_size, DataSetMode::DataSetType::ASCENDING);
  int * arr_descending = createArray(arr_size, DataSetMode::DataSetType::DESCENDING);
  int * arr_random = createArray(arr_size, DataSetMode::DataSetType::RANDOM);

  // 테스트 시작
  cout << "Test Started" << endl;
  cout << "Array Size : " << arr_size << endl; 
  cout << "PIVOT : FIRST, RANDOM, MEDIAN" << endl;
  cout << "DATASET : ASCENDING, DESCENDING, RANDOM" << endl;
  cout << "===============================================================" << endl;
  // Pivot : FIRST
  runQuickSortTest(arr_ascending, arr_size, PivotMode::Pivot::FIRST, DataSetMode::DataSetType::ASCENDING);
  runQuickSortTest(arr_descending, arr_size, PivotMode::Pivot::FIRST, DataSetMode::DataSetType::DESCENDING);
  runQuickSortTest(arr_random, arr_size, PivotMode::Pivot::FIRST, DataSetMode::DataSetType::RANDOM);
  cout << "===============================================================" << endl;

  // Pivot : MEDIAN
  runQuickSortTest(arr_ascending, arr_size, PivotMode::Pivot::MEDIAN, DataSetMode::DataSetType::ASCENDING);
  runQuickSortTest(arr_descending, arr_size, PivotMode::Pivot::MEDIAN, DataSetMode::DataSetType::DESCENDING);
  runQuickSortTest(arr_random, arr_size, PivotMode::Pivot::MEDIAN, DataSetMode::DataSetType::RANDOM);
  cout << "===============================================================" << endl;

  // Pivot : RANDOM
  runQuickSortTest(arr_ascending, arr_size, PivotMode::Pivot::RANDOM, DataSetMode::DataSetType::ASCENDING);
  runQuickSortTest(arr_descending, arr_size, PivotMode::Pivot::RANDOM, DataSetMode::DataSetType::DESCENDING);
  runQuickSortTest(arr_random, arr_size, PivotMode::Pivot::RANDOM, DataSetMode::DataSetType::RANDOM);
  cout << "===============================================================" << endl;
   
  delete [] arr_ascending;
  delete [] arr_descending;
  delete [] arr_random;
  return 0;
}