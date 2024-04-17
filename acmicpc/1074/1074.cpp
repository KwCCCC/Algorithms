#include <bits/stdc++.h>

using namespace std;

int solve(int N, int r, int c) {
    if (N == 1) {
        if (r == 0 && c == 0) return 0;
        if (r == 0 && c == 1) return 1;
        if (r == 1 && c == 0) return 2;
        if (r == 1 && c == 1) return 3;
    }

    if (r < pow(2, N-1) && c < pow(2, N-1)) return solve(N-1, r, c);
    if (r >= pow(2, N-1) && c < pow(2, N-1)) return pow(4, N-1) * 2 + solve(N-1, r-pow(2, N-1), c);
    if (r < pow(2, N-1) && c >= pow(2, N-1)) return pow(4, N-1) + solve(N-1, r, c-pow(2, N-1));
    else return pow(4, N-1) * 3 + solve(N-1, r-pow(2, N-1), c-pow(2, N-1));
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, r, c;
    cin >> N >> r >> c;

    cout << solve(N, r, c);
}

