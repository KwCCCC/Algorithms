#include <bits/stdc++.h>

using namespace std;

int main() {
    string init;
    cin >> init;

    stack<char> left;
    stack<char> right;

    for (auto ele : init) {
        left.push(ele);
    }

    int M;
    cin >> M;

    while (M--) {
        char cmd;
        cin >> cmd;

        if (cmd == 'L') {
            if (left.empty()) continue;
            right.push(left.top());
            left.pop();
        }

        if (cmd == 'D') {
            if (right.empty()) continue;
            left.push(right.top());
            right.pop();
        }

        if (cmd == 'B') {
            if (left.empty()) continue;
            left.pop();
        }

        if (cmd == 'P') {
            char ch;
            cin >> ch;
            left.push(ch);
        }
    }

    stack<char>reversed;
    while (!left.empty()) {
        reversed.push(left.top());
        left.pop();
    }

    while (!reversed.empty()) {
        cout << reversed.top();
        reversed.pop();
    }

    while (!right.empty()) {
        cout << right.top();
        right.pop();
    }
    
}

