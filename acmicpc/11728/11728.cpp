#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    vector<int> A(N+M);
    vector<int> B(N+M);

    for (int i = 0; i < N+M; i++) {
        cin >> A[i];
    }

    int l, m, k;
    l = k = 0, m = N;

    while (l < N && m < N+M) {
        if (A[l] <= A[m]) B[k++] = A[l++];
        else B[k++] = A[m++];
    }

    while (l < N) B[k++] = A[l++];
    while (m < N+M) B[k++] = A[m++];

    for (int i = 0; i < N+M; i++) {
        cout << B[i] << ' ';
    }

}

