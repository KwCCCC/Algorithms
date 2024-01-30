# [SILVER 2] [제곱수의 합]

[문제 링크](https://www.acmicpc.net/problem/1699) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

d[i] = 자연수 i를 제곱수들의 합으로 표현할 때의 최소 개수

d[n] = min(d[n], d[n-i] + d[i]) for 0 <= i <= n // 2
로 하면 O(n**2)가 나온다. 

시간복잡도를 더 줄일 수 있는 방법은 제곱수인 i에 대해서만 최솟값을 계산하는 것이다. 
d[n] = min(d[n], d[n-i*i] + 1)
로 하면 O(n**3/2)가 나온다. 
### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
