#include "QuickSortPivot.hpp"

#include "PivotMode.hpp"

int QuickSortPivot::Partition(int Left, int Right, PivotMode::Pivot mode) {
  int pivotIndex = CalcPivot(Left, Right, mode); //피벗 위치를 계산
  int pivotValue = arr[pivotIndex];              //피벗 값
  Swap(arr[pivotIndex],arr[Right]);               //피벗을 마지막 원소와 교환
  int storeIndex = Left;                          //작은 값들을 저장할 시작 위치
  //피벗을 기준으로 작은 값들은 왼쪽으로 이동
  for(int i=Left;i<Right;i++){
    if(arr[i]< pivotValue){
      Swap(arr[i],arr[storeIndex]); //작은 값들을 왼쪽으로 이동
      storeIndex++;                 //작은 값들을 저장할 위치를 증가
    }
  }
  Swap(arr[storeIndex], arr[Right]); //피벗을 최종위치로 이동
  return storeIndex;                //피벗의 최종 위치를 반환
}

void QuickSortPivot::QuickSortFunc(int Left, int Right, PivotMode::Pivot mode) {
  if (Left < Right) {
    int pivotIndex = CalcPivot(Left, Right, mode); //피벗 위치를 계산
    int pivot = Partition(Left, Right, mode); //피벗을 기준으로 분할
    QuickSortFunc(Left, pivot - 1); //왼쪽 부분배열을 정렬
    QuickSortFunc(pivot + 1, Right); //오른쪽 부분배열을 정렬
  }
}
