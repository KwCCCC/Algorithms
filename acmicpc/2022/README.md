# [GOLD 4] [사다리]

[문제 링크](https://www.acmicpc.net/problem/2022) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[이분 탐색]

</details>

### 문제 요약 및 해결 방안 스케치

d = d1 + d2, d1 = sqrt(x^2 - d^2), d2 = sqrt(y^2 - d^2), 
1 / c = 1 / d1 + 1 / d2

실수 이분 탐색이므로 다음과 같은 표현 중 하나를 사용한다. 
1. for (int k = 0; k < 10000; k++)
2. while (abs(right-left) > 1e-6)

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
