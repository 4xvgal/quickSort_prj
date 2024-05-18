#include "../QuickSortPivot.hpp"
#include <iostream>

class QuickSortPivotTester {
public:
  void runTest() {
    // 테스트용 배열 생성
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // QuickSortPivot 객체 생성
    QuickSortPivot qsp(arr, size);

    // 배열 출력 (정렬 전)
    std::cout << "Before sorting: ";
    for (int i = 0; i < size; ++i) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 퀵 정렬 수행
    qsp.QuickSortFunc(0, size - 1, PivotMode::Pivot::FIRST);

    // 배열 출력 (정렬 후)
    std::cout << "After sorting: ";
    int *sortedArr = qsp.getArr();
    for (int i = 0; i < size; ++i) {
      std::cout << sortedArr[i] << " ";
    }
    std::cout << std::endl;
  }
  int main(){
    QuickSortPivotTester tester;
    tester.runTest();
    return 0;
  }
};
