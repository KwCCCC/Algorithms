# [GOLD 5] [하노이 탑 이동 순서]

[문제 링크](https://www.acmicpc.net/problem/11729) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[분할 정복]

</details>

### 문제 요약 및 해결 방안 스케치

원판이 4개 있다면 위 3개의 원판은 첫 번째 기둥에서 두 번째 기둥으로 옮긴 후 마지막 원판을 세 번째 기둥으로 옮기고 3개의 원판을 두 번째 기둥에서 세 번째 기둥으로 옮기면 된다. 하나의 큰 문제가 작은 부분문제로 분할되므로 재귀 호출을 이용해서 문제를 해결하면 된다. 

solve(int N, int from, int to)

마지막 원판을 옮길 때 개수를 추가하면 된다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
