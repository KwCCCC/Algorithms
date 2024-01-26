# [GOLD 4] [오큰수 - 17298]

[문제 링크](https://www.acmicpc.net/problem/17298) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[자료구조(Stack)]

</details>

### 문제 요약 및 해결 방안 스케치

배열의 끝에서 왼쪽으로 순회하며 스택에 오름차순으로 저장된 값과 비교한다. 스택이 빌때까지 비교하며 스택이 비었다는 의미는 오큰수가 존재하지 않는다는 의미이고, 스택이 비지 않았다는 의미는 해당 배열의 원소 값이 스택의 top값임을 알 수 있다.

### Solution

<details><summary>Solution</summary> 

[Source Code]

단순히 반복문이 중첩되어 있어 N^2의 시간복잡도를 예상했지만 아니었다. 자료구조의 형태에 따라 시간복잡도를 더 빠르게 계산할 수 있다. Amortized Analysis를 찾아보자. (https://gazelle-and-cs.tistory.com/87)

</details>
