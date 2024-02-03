#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int set = 0;

    int M;
    cin >> M;

    while (M--) {
        string s;
        cin >> s;
        if (s == "add") {
            int x;
            cin >> x;
            set = set | (1 << (x-1));
        } else if (s == "remove") {
            int x;
            cin >> x;
            set = set & ~(1 << (x-1));
        } else if (s == "check") {
            int x;
            cin >> x;
            cout << (set & (1 << (x-1)) ? 1 : 0) << '\n';
        } else if (s == "toggle") {
            int x;
            cin >> x;
            set = set ^ (1 << (x-1));
        } else if (s == "all") {
            set = (1 << 20)-1;
        } else if (s == "empty") {
            set = 0;
        }
    }

}

