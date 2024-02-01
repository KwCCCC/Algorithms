#include <bits/stdc++.h>

using namespace std;

int a[10];
int n, m;

void go(int index, int selected) {
    if (selected == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    if (index > n) return;

    for (int i = m-selected; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            a[selected + j] = index;
        }
        go(index+1, selected+i);
    }

    go(index+1, selected);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    go(1, 0);
}

