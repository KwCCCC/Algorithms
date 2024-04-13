#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    // a, b개수 선택
    int a = N / 2;
    int b = N - a;

    vector<int> s(b+1);

    if (a * b < K) cout << -1;
    else {
        for (int i = 0; i < b; i++) {
            s[i] = K / (b-i);
            K %= (b-i);
            a -= s[i];
        }
        s[b] = a;

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < s[i]; j++) {
                cout << 'A';
            }
            cout << 'B';
        }
        for (int j = 0; j < s[b]; j++) {
            cout << 'A';
        }
    }
}

