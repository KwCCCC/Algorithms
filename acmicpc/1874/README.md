# [SILVER 2] [스택 수열 - 1874]

[문제 링크](https://www.acmicpc.net/problem/1874) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[자료구조(Stack)]

</details>

### 문제 요약 및 해결 방안 스케치

숫자가 증가할 때도 있고, 감소할 때도 있는데, 숫자가 증가하는 구간에서는 항상 해당 수열을 만들 수 있다. 숫자가 감소하는 구간에서 감소하는 첫 번째 숫자가 스택의 top에 위치해있지 않다면 그 수열을 만들 수 없다. 

스택에 추가되어야 하는 수를 m, 해당 수열을 A라 하면, 수열을 순회하면서 m과 A[i]를 비교한다. m < A[i] 인 경우는 push, m > A[i]인 경우는 pop으로 생각할 수 있으며 m > A[i]일 때 스택의 top이 A[i]와 같지 않으면 불가능 한 수열이므로 NO를 출력한다. 

Point
1. 스택의 top이 A[i]와 같지 않으면 불가능 한 수열이다.
2. 스택에 들어갈 수 m은 단순 증가한다.

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
