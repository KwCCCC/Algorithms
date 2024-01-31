# [GOLD 5] [연속합 2]

[문제 링크](https://www.acmicpc.net/problem/13398) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

d[N][K] = N번째 수에서 가능한 연속합의 최댓값 (K : 0 - 수를 제거하지 않음, 1 - 수를  제거함)

d[N][0] = d[N-1][0] + A[N] or A[N]

d[N][1] = d[N-1][0] or d[N-1][1] + A[N]

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
