# [SILVER 1] [RGB 거리]

[문제 링크](https://www.acmicpc.net/problem/1149) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

d[i][j] = i번 집을 j색으로 칠했을때 i번 집까지 칠하는 비용의 최솟값

(j : 0 - 빨강, 1 - 초록, 2 - 파랑)

j == 0 -> d[i][j] = min(d[i-1][1] + A[i][j], d[i-1][2] + A[i][j])

So on...

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
