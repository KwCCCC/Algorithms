#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int E, S, M;
    cin >> E >> S >> M;

    int ans = 0;
    int e, s, m;
    e = s = m = 0;

    while (true) {
        e += 1;
        s += 1;
        m += 1;
        if (e > 15) e-=15;
        if (s > 28) s-=28;
        if (m > 19) m-=19;

        ans += 1;

        if (e == E && s == S && m == M) break;
    }

    cout << ans;
}

