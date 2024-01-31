# [GOLD 5] [연속합 2]

[문제 링크](https://www.acmicpc.net/problem/13398) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

A[i]를 제거하고 연속합을 구하면 된다. (i : 1 ~ N)

매번 전체를 구할 필요는 없으므로(중복 발생), 
DL[i] = i에서 끝나는 최대 연속합,
DR[i] = i에서 시작하는 최대 연속합을 구해서
A[i]를 제거하고 구한 최대 연속합을 DL[i-1] + DR[i+1]로 구하면 된다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
