#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> num;
int a[10];

void go(int index) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        a[index] = num[i];
        go(index + 1);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        num.push_back(k);
    }
    sort(num.begin(), num.end());

    go(0);
}

