#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> s;
    string ans = "";
    int N;
    cin >> N;

    int m = 1;
    int num[N];
    for (int i = 0; i < N; i++) {
        cin >> num[i];
        if (m < num[i]) {
            while (m != num[i]) {
                s.push(m++);
                ans += "+";
            }
        }

        if (m > num[i]) {
            if (s.top() != num[i]) {
                cout << "NO";
                return 0;
            } else {
                ans += "-";
                s.pop();
            }
        }

        if (m == num[i]) {
            ans += "+-";
            m++;
        }
    }
    for (int i = 0; i < ans.length(); i++) {
        cout << ans[i] << '\n';
    }
}