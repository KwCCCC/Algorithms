# [GOLD 4] [Two Dots]

[문제 링크](https://www.acmicpc.net/problem/16929) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[내용]

</details>

### 문제 요약 및 해결 방안 스케치

bool dfs(int x, int y, int startx, int starty, int cnt) = x, y를 기준으로 4방향 탐색, 만약 x, y와 startx, starty가 인접하고 cnt >= 4이면 true, 아니면 false

각 칸을 방문할 때 시작점과의 거리를 기록해서 거리가 >= 4 이면 true를 return 하는 방식으로 구현할 수도 있다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
