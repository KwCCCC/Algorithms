#include <bits/stdc++.h>

using namespace std;

int d[1005], p[1005];

int go(int N) {
    if (N == 1) return p[N];
    if (d[N] > 0) return d[N];
    d[N] = p[N];
    for (int i = 1; i < N; i++) {
        d[N] = min(d[N], go(N-i) + p[i]);
    }

    return d[N];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }

    cout << go(N);
}

