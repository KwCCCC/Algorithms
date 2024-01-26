#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> q;

    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int X;
            cin >> X;

            q.push(X);
        }

        if (cmd == "pop") {
            cout << (q.empty() ? -1 : q.front()) << '\n';
            if (!q.empty()) q.pop();
        }

        if (cmd == "size") {
            cout << q.size() << '\n';
        }

        if (cmd == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        }

        if (cmd == "front") {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        }
        
        if (cmd == "back") {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }
}

