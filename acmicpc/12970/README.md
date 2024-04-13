# [GOLD 4] [AB]

[문제 링크](https://www.acmicpc.net/problem/12970) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[그리디 알고리즘]

</details>

### 문제 요약 및 해결 방안 스케치

B가 b개 있을 때, A를 맨 앞에 넣으면 순서쌍의 개수가 b개, A를 맨 뒤에 넣으면 순서쌍의 개수가 0개이므로 [0, b]의 순서쌍이 모두 가능하다. A가 a개 있을 때 만들 수 있는 순서쌍은 [0, a*b] 이다. 따라서 a * b >= K이면서 a + b == N 인 a, b를 찾아 해를 구성하면 된다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
