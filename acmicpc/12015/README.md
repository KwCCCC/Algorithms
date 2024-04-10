# [GOLD 2] [가장 긴 증가하는 부분 수열 2]

[문제 링크](https://www.acmicpc.net/problem/12015) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[그리디 알고리즘]

</details>

### 문제 요약 및 해결 방안 스케치

lower bound를 활용해 O(nlogn) 으로 해결 할 수 있다. 회의실 배정문제에서 회의 종료 시간이 빠른 순으로 선택하는 경우와 비슷하다.

추가 배열을 만들고 원 배열을 탐색하며 큰 수는 추가 배열에 이어 붙인다. 그 후 추가 배열의 마지막에 추가된 값보다 작은 값은 이분탐색(lower bound)를 통해 적절한 자리를 찾아 교환한다. (https://hongjw1938.tistory.com/58)


### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
