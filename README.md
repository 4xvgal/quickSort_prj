해당 리포지토리는 퀵소트 정렬을 구현하고
퀵소트 알고리즘의 장단점을 연구하기 위해 생성된 프로젝트입니다.

퀵소트 알고리즘에서 피벗의 위치, 데이터셋의 형태를 변형하여 성능 차이를 확인하였다.
피벗의 위치 : First, End, Middle, Random
데이터셋의 종류 : 오름차순, 내림차순, 무작위

10만개의 데이터를 초기화해서 얻은 결과

```
Test Started
Array Size : 100000
============================================
PivotMode : FIRST, DATASET : ASCENDING, Duration : 6410.95ms
PivotMode : FIRST, DATASET : DESCENDING, Duration : 11490.3ms
PivotMode : FIRST, DATASET : RANDOM, Duration : 11.184ms
============================================
PivotMode : END, DATASET : ASCENDING, Duration : 6427.53ms
PivotMode : END, DATASET : DESCENDING, Duration : 11417.3ms
PivotMode : END, DATASET : RANDOM, Duration : 11.184ms
============================================
PivotMode : MIDDLE, DATASET : ASCENDING, Duration : 3193.4ms
PivotMode : MIDDLE, DATASET : DESCENDING, Duration : 5725.87ms
PivotMode : MIDDLE, DATASET : RANDOM, Duration : 11.21ms
============================================
PivotMode : RANDOM, DATASET : ASCENDING, Duration : 4010.08ms
PivotMode : RANDOM, DATASET : DESCENDING, Duration : 4921.97ms
PivotMode : RANDOM, DATASET : RANDOM, Duration : 11.422ms
============================================
```






