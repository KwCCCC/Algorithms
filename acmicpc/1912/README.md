# [SILVER 2] [연속합 - 1912]

[문제 링크](https://www.acmicpc.net/problem/1912) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

D[i] : i번쨰 수로 끝나는 가능한 최대 연속합

i index에서 가능한 방법은 i를 i-1까지의 연속합에 포함시키거나, 새로 시작하는 것뿐이다. 

D[i] = max(A[i], D[i-1] + A[i])

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
