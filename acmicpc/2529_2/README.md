# [SILVER 1] [부등호]

[문제 링크](https://www.acmicpc.net/problem/2529) 

### 성능 요약

메모리 : 2024KB, 시간 : 0ms

### 분류

<details><summary>문제 분류</summary> 

[백트래킹]

</details>

### 문제 요약 및 해결 방안 스케치

최대 경우의 수는 10!이므로 모든 경우를 다 시도해보아도 시간초과에 걸리지 않는다. 모든 경우의 수를 재귀문을 이용해서 탐색할 수 있다. 

최댓값은 남아 있는 수 중 큰 수부터 사용하여 구할 수 있고,
최솟값은 남아 있는 수 중 작은 수부터 사용하여 구할 수 있다. 

큰 수부터 사용해서 구할 때 올바른 값이 나온다면 그 값은 반드시 최댓값이므로, 탐색을 종료해도 된다. 

극한의 백트래킹.


### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
