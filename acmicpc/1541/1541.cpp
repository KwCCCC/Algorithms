#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int ans = 0;
    int tmp = 0;

    string s;
    cin >> s;

    bool m = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            tmp = tmp * 10 + (s[i] - '0');
        } else if (s[i] == '-' && m == false) {
            m = true;
            ans += tmp;
            tmp = 0;
        } else if (m == true) {
            ans -= tmp;
            tmp = 0;
        } else if (s[i] == '+') {
            ans += tmp;
            tmp = 0;
        }
    }

    if (m == true) ans -= tmp;
    else ans += tmp;

    cout << ans;

}

