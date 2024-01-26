#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    queue<int> q;
    queue<int> num;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        int ord = K;
        while (--ord) {
            q.push(q.front());
            q.pop();
        }
        num.push(q.front());
        q.pop();
    }

    cout << "<" << num.front();
    num.pop();

    while (!num.empty()) {
        cout << ", " << num.front();
        num.pop();
    }

    cout << ">";
}

