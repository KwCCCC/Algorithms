#include <bits/stdc++.h>

using namespace std;

int a[10];
int n, m;

void go(int index, int k) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }


    for (int i = k + 1; i <= n; i++) {
        a[index] = i;
        go(index + 1, i);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    go(0, 0);
}

