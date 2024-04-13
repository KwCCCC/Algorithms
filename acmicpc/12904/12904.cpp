#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S, T;
    cin >> S >> T;

    while (T.length() != S.length()) {
        if (T.back() == 'A') T.pop_back();
        else {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }

    if (T == S) cout << 1;
    else cout << 0;
}

