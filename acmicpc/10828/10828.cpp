#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> s;
    while(N--) {
        string str;
        cin >> str;
        if (str == "push") {
            int n;
            cin >> n;
            s.push(n);
        }

        if (str == "pop") {
            if (s.size() == 0) {
                cout << -1 << '\n';
            } else {
                cout << s.top() << '\n';
                s.pop();
            }
        }

        if (str == "size") {
            cout << s.size() << '\n';
        }

        if (str == "empty") {
            if (s.size() == 0) {
                cout << 1 << '\n';
            } else cout << 0 << '\n';
        }

        if (str == "top") {
            if (s.size() == 0) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
    }
}

