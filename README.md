<h2>
  QuickSort_prj
</h2>
해당 리포지토리는 퀵소트 정렬을 구현하고
퀵소트 알고리즘의 장단점을 연구하기 위해 생성된 프로젝트입니다.
<h2>사용법
</h2>
리포지토리를 다운로드하여 프로젝트 루트 디렉토리에서

```
CMake .
make
./bin/main
```

를 차례대로 실행합니다.


퀵소트 알고리즘에서 피벗의 위치, 데이터셋의 형태를 변형하여 성능 차이를 확인하였다.
피벗의 위치 : First, MEDIAN, Random
데이터셋의 종류 : 오름차순, 내림차순, 무작위

<h2>10만개의 데이터를 초기화해서 얻은 결과
</h2>

```
Test Started
Array Size : 100000
PIVOT : FIRST, RANDOM, MEDIAN
DATASET : ASCENDING, DESCENDING, RANDOM
===============================================================
PivotMode : FIRST, Dataset : ASCENDING, Duration : 6426.71ms
PivotMode : FIRST, Dataset : DESCENDING, Duration : 11711.6ms
PivotMode : FIRST, Dataset : RANDOM, Duration : 11.494ms
===============================================================
PivotMode : MEDIAN, Dataset : ASCENDING, Duration : 3192.33ms
PivotMode : MEDIAN, Dataset : DESCENDING, Duration : 5771.01ms
PivotMode : MEDIAN, Dataset : RANDOM, Duration : 11.263ms
===============================================================
PivotMode : RANDOM, Dataset : ASCENDING, Duration : 4021.43ms
PivotMode : RANDOM, Dataset : DESCENDING, Duration : 4886.29ms
PivotMode : RANDOM, Dataset : RANDOM, Duration : 11.535ms
===============================================================

```






