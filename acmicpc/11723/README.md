# [SILVER 5] [집합]

[문제 링크](https://www.acmicpc.net/problem/11723) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[비트마스크]

</details>

### 문제 요약 및 해결 방안 스케치

비트마스크는 부분집합을 효과적으로 표현할 수 있는 방법이다. 재귀 + 선택의 관점으로 부분집합을 표현할 수도 있지만, 비트마스크로 더 편하게 부분집합을 나타낼 수 있다. 

비트마스크를 이용하는 이유는 집합을 배열의 원소로 표현할 수 있기 때문이다. 상태 다이나믹시에 자주 사용된다. 

0 ~ N-1까지의 집합을 표현하기 좋기 때문에 정수 1 ~ 20을 0 ~ 19에 대응한다. 

32 / 64비트를 넘을 경우 bitset 클래스를 사용할 수 있다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
