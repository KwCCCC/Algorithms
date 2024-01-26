#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> d;

    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push_back") {
            int X;
            cin >> X;

            d.push_back(X);
        }

        if (cmd == "push_front") {
            int X;
            cin >> X;

            d.push_front(X);
        }

        if (cmd == "pop_front") {
            cout << (d.empty() ? -1 : d.front()) << '\n';
            if (!d.empty()) d.pop_front();
        }

        if (cmd == "pop_back") {
            cout << (d.empty() ? -1 : d.back()) << '\n';
            if (!d.empty()) d.pop_back();
        }

        if (cmd == "size") {
            cout << d.size() << '\n';
        }

        if (cmd == "empty") {
            cout << (d.empty() ? 1 : 0) << '\n';
        }

        if (cmd == "front") {
            cout << (d.empty() ? -1 : d.front()) << '\n';
        }
        
        if (cmd == "back") {
            cout << (d.empty() ? -1 : d.back()) << '\n';
        }
    }
}

