#!/bin/bash
# https://mingdev10.tistory.com/74
mkdir $1
echo "#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
}
" > $1/$1.cpp
> $1/input.txt

echo "# [난이도] [문제 이름]

[문제 링크]() 

### 성능 요약

### 분류

<details><summary>문제 분류</summary> 

[내용]

</details>

### 문제 요약 및 해결 방안 스케치

### Solution

<details><summary>Solution</summary> 

[Source Code]

</details>" > $1/README.md

