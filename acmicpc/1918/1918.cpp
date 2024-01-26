#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<char, int> pre;
    pre['*'] = 3;
    pre['/'] = 3;
    pre['+'] = 2;
    pre['-'] = 2;
    pre['('] = 1;
    pre[')'] = 1;
    
    string inp;
    cin >> inp;

    stack<char> s;

    for (auto ch : inp) {
        if (ch >= 'A' && ch <= 'Z') {
            cout << ch;
        } else if (ch == '(') {
            s.push('(');
        } else if (ch == ')') {
            while (s.top() != '(') {
                cout << s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && pre[ch] <= pre[s.top()]) {
                cout << s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

