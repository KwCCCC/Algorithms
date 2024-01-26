#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    stack<char> s;

    int m = 0;
    int open = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            open = 1;
            m += 1;
            s.push('(');
        }

        if (str[i] == ')') {
            s.pop();
            if (open) {
                m -= 1;
                m += s.size();
                open = 0;
            }
        }
    }

    cout << m;
}

