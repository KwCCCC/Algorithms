# [SILVER 1] [스타트와 링크]

[문제 링크](https://www.acmicpc.net/problem/14889) 

### 성능 요약

시간 : 456
### 분류

<details><summary>문제 분류</summary> 

[비트마스크]

</details>

### 문제 요약 및 해결 방안 스케치

비트마스크로 모든 부분집합을 다 검사해보되, 부분집합의 크기가 N / 2가 아닌 부분집합은 건너뛴다. 

cnt 변수를 집어 넣어 부분집합의 크기가 N / 2인지 미리 확인하는 코드를 삽입하면 시간이 1/4배로 줄어든다. (116ms) vector 연산의 시간복잡도가 생각보다 큰 걸까?

(https://www.acmicpc.net/board/view/135661#comment-206875)

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
