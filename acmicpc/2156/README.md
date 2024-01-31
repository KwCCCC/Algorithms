# [SILVER 1] [포도주 시식]

[문제 링크](https://www.acmicpc.net/problem/2156) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

d[N][K] : N번째까지 마신 포도주의 양중 최댓값, K - 연속해서 마신 잔의 개수.

d[N][0] = max(d[N-1][0], d[N-1][1], d[N-1][2])

d[N][1] = d[N-1][0] + A[N]

d[N][2] = d[N-1][1] + A[N]

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
