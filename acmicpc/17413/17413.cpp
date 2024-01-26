#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    getline(cin, str);

    stack<char> s;

    int tag = 0;
    for (auto ch : str) {
        if (ch == '<') {
            if (!s.empty()) {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
            }
            tag = 1;
            cout << '<';
            continue;
        }
        if (ch == '>') {
            tag = 0;
            cout << '>';
            continue;
        }
        if (ch == ' ') {
            if (!s.empty()) {
                while(!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
            }
            cout << ' ';
            continue;
        }

        if (tag == 1) {
            cout << ch;
        } else {
            s.push(ch);
        }
    }

    if (!s.empty()) {
        while(!s.empty()) {
            cout << s.top();
            s.pop();
        }
    }

}

