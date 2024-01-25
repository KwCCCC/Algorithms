#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    while(N--) {
        stack<string> s;
        string ps;
        cin >> ps;

        int res = 1;
        for (int i = 0; i < ps.size(); i++) {

            if (ps[i] == '(') {
                s.push("(");
            }

            if (ps[i] == ')') {
                if (s.empty() == 1) {
                    res = 0;
                    break;
                } else s.pop();
            }
        }

        if (res == 1 && s.empty()) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}

