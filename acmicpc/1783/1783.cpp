#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    if (N == 1) cout << 1;
    else if (N == 2) cout << min(4, (M-1)/2 + 1);
    else {
        if (M >= 7) cout << M-2;
        else cout << min(4, M);
    }
}

