#pragma once
#include <stdlib.h>
#include <time.h>
// 피벗 모드
#include "PivotMode.hpp"

class QuickSortPivot {
public:
  // 피벗 위치 선택 기능이 포함된 퀵소트 클래스
  // 클래스 내부의 배열은 포인터이므로 매개변수로 사용하는 배열을 직접적으로
  // 접근합니다. 클래스 내부의 배열은 포인터이므로 클래스 내부에서는 배열
  // 메모리를 해제하지 않습니다.
private:
  void Swap(int &a, int &b) { // 두 변수의 값을 교환하는 함수
    int temp = a;
    a = b;
    b = temp;
  }
  int *arr; // 배열 포인터
  int size; // 배열의 크기를 저장하는 변수
public:
  QuickSortPivot(int *arr, int size) {
    this->arr = arr;
    this->size = size;
  }
  QuickSortPivot(int **arr, int size) {
    this->arr = *arr;
    this->size = size;
  } 
  QuickSortPivot() { this->arr = nullptr; }
  int Partition(int Left, int Right, PivotMode::Pivot mode = PivotMode::Pivot::FIRST);
  void QuickSortFunc(int Left, int Right, PivotMode::Pivot mode = PivotMode::Pivot::FIRST);
  int *getArr() { return arr; }
  void setArr(int *arr) { this->arr = arr; }
  void setSize(int size) { this->size = size; }
  int CalcPivot(int Left, int Right, PivotMode::Pivot mode = PivotMode::Pivot::FIRST) {
    switch(mode) {
      case PivotMode::Pivot::FIRST:
        return Left;
      case PivotMode::Pivot::END:
        return Right;
      case PivotMode::Pivot::MIDDLE:
        return (Left + Right) / 2;
      case PivotMode::Pivot::RANDOM:
        return Left + rand() % (Right - Left + 1);
      default:
        return Left;
    }
  }
  // 소멸자
  ~QuickSortPivot() {}
};
