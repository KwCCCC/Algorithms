# [SILVER 2] [외판원 순회 2]

[문제 링크](https://www.acmicpc.net/problem/10971) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[백트래킹]

</details>

### 문제 요약 및 해결 방안 스케치

N = 10이므로 모든 경우의 수는 10!이며 한 경우의 수당 걸리는 시간 복잡도는 N, 즉 O(N! * N)이다. 

원점으로 다시 돌아오는 것을 생각하면, 1 2 3 4, 2 3 4 1, 3 4 1 2, 4 1 2 3은 모두 같은 경우이다. 따라서 시작점을 1로 고정해도 된다. 이때 시간 복잡도는 O(N!)이다. (원순열)

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
