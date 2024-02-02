# [GOLD 3] [Guess]

[문제 링크](https://www.acmicpc.net/problem/1248) 

### 성능 요약

메모리 : 2020KB, 시간 : 228ms

### 분류

<details><summary>문제 분류</summary> 

[백트래킹]

</details>

### 문제 요약 및 해결 방안 스케치

총 경우의 수는 21^10이다. 

경우의 수를 줄여야 한다. 
1. (i, i)가 + 이면 1~10까지, -이면 -10~-1까지, 0이면 0일때만 탐색하면 된다. 
2. index가 정해지면 0 ~ index까지 미리 가능한지 check한다. 

제한 시간을 넘는 경우의 수이지만, 탐색 범위 제한, 수열 early test를 통해 시간을 줄일 수 있다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
