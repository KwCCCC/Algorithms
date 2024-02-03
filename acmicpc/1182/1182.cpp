#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, S;
    cin >> N >> S;

    int A[21];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int cnt = 0;
    for (int i = 1; i < (1 << N); i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) sum += A[j];
        }
        if (sum == S) cnt++;
    }
    cout << cnt;
}

