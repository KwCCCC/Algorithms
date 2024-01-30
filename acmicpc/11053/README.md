# [SILVER 2] [가장 긴 증가하는 부분 수열 - 11053]

[문제 링크](https://www.acmicpc.net/problem/11053) 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[다이내믹 프로그래밍]

</details>

### 문제 요약 및 해결 방안 스케치

수열 A = {10, 20, 10, 30, 20, 50}
배열읭 각 원소가 가장 긴 증가하는 부분수열에 포함될 수도, 안될 수도 있음.
순서대로 빠짐없이 모든 경우의수를 고려하기 위해
d[n] : n번째 Index를 포함해서 만들수 있는 가장 긴 증가하는 부분 수열의 길이
로 정의하도록 한다. 

n보다 작은 Index i에 대해서 A[n] > A[i]를 만족하는 i 중 max(d[i]) + 1을 저장한다. 

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>
