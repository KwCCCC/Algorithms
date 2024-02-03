# [GOLD 3] [종이 조각]

[문제 링크](https://www.acmicpc.net/problem/14391) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[비트마스크]

</details>

### 문제 요약 및 해결 방안 스케치

우선, 직사각형은 1 X N or N X 1 형태이고, 모든 칸은 가로칸에 속하거나, 세로칸에 속한다. 가로에 속하는 칸을 0, 세로에 속하는 칸을 1이라고 하면, 0과 1로 작성된 칸은 잘려진 종이조각 모양과 일대일 대응된다. 

따라서 0과 1의 모든 경우의 수를 탐색하며 최댓값을 탐색하면 되고, 시간 복잡도는 2^16 * (NM * 3)이다. 

// ios_base::sync_with_stdio(false);를 사용하게 되면 scanf와 cin을 동시에 사용하는 것이 불가능하다. 이것때문에 엄한곳에 삽질만 .. 주석처리를 하거나 코드를 없애자.

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
