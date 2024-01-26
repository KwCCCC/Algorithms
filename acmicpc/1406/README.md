# [SILVER 2] [에디터 - 1406]

[문제 링크](https://www.acmicpc.net/problem/1406) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[자료구조(Stack)]

</details>

### 문제 요약 및 해결 방안 스케치

Point - "LIFO" 구조인 것을 활용
커서를 기준으로 왼쪽 문자열, 오른쪽 문자열을 스택으로 각각 저장
L - 왼쪽 스택의 top 문자를 pop후 오른쪽 스택으로 push
D - 오른쪽 스택의 top 문자를 pop후 왼쪽 스택으로 push
B - 왼쪽 스택을 pop
P $ - $ 문자를 왼쪽 스택에 push

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
