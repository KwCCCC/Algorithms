#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    string str;
    cin >> str;

    stack<double> s;
    double A[26];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (auto ch : str) {
        if (ch >= 'A' && ch <= 'Z') {
            s.push(A[ch-'A']);
        } else {
            double n1, n2;
            n2 = s.top(); s.pop();
            n1 = s.top(); s.pop();
             
            if (ch == '*') s.push(n1 * n2);
            if (ch == '/') s.push(n1 / n2);
            if (ch == '+') s.push(n1 + n2);
            if (ch == '-') s.push(n1 - n2);
        }
    }

    double ans = s.top();
    printf("%.2f", ans);
}

