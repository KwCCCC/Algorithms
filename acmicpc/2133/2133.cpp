#include <bits/stdc++.h>

using namespace std;
using lint = long long;

lint D[31];
lint go(int N) {
    if (N == 0) return 1;
    if (N == 1) return 0;
    if (N == 2) return 3;
    if (D[N] > 0) return D[N];

    D[N] = go(N-2) * 3;
    for (int i = 4; i <= N; i += 2) {
        D[N] += go(N-i) * 2;
    }
     
    return D[N];
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    cout << go(N);
}

