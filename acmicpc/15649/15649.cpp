#include <bits/stdc++.h>

using namespace std;

bool c[10]; int a[10];
int n, m;
void go(int index) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; i++) {
        if (c[i]) continue;
        c[i] = true;
        a[index] = i;
        go(index+1);
        c[i] = false;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    go(0);

}

