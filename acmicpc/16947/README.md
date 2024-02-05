# [GOLD 3] [서울 지하철 2호선]

[문제 링크](https://www.acmicpc.net/problem/16947) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[DFS, BFS]

</details>

### 문제 요약 및 해결 방안 스케치

각 역이 Cycle에 속하는지를 먼저 파악하고 bool cycle[N] 배열에 저장한다. 그 후 int dist[N] 배열에 각 역에서 순환선까지의 최소 거리를 저장한다. cycle에 속하는지 여부는 dfs로, 최소거리는 bfs로 탐색을 진행한다. 시간복잡도는 O(N^2) 이다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
