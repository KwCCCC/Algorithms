# [SILVER 1] [Z]

[문제 링크](https://www.acmicpc.net/problem/1074) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[분할 정복]

</details>

### 문제 요약 및 해결 방안 스케치

N의 크기가 15이므로 최대 칸 수는 2^30이고 이 문제의 시간제한은 0.5초이다. 따라서 모든 경로를 추적하면 시간 초과가 걸린다. 

칸을 사분면으로 나누었을 때 각 사분면에서의 이동횟수는 동일하다. 즉 총 이동횟수는 동일한 각 사분면에서의 이동횟수 + 사분면으로 오기까지의 이동횟수로 계산할 수 있다. 모든 경로를 추적할 필요없이 어떤 사분면에 속하는 지만 추적한다면 위 수식을 이용하여 효율적으로 계산할 수 있다.

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
