#include <bits/stdc++.h>

using namespace std;

int N, M;
int a[10];

void go(int index, int start) {
    if (index == M) {
        for (int i = 0; i < M; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; i++) {
        a[index] = i;
        go(index+1, i);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;

    go(0, 1);
}

