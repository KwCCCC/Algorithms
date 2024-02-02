#include <bits/stdc++.h>

using namespace std;

int L, C;
char a[16];
char c[16];

void go(int index, int start, int x, int y) {
    if (index == L) {
        if (x >= 2 && y >= 1) {
            for (int i = 0; i < L; i++) {
                cout << a[i];
            }
            cout << '\n';
            return;
        } else return;
    }

    for (int i = start; i < C; i++) {
        char ch = c[i];
        a[index] = ch;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            go(index+1, i+1, x, y+1);
        } else {
            go(index+1, i+1, x+1, y);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L >> C;

    for (int i = 0; i < C; i++) {
        cin >> c[i];
    }

    sort(c, c+C);
    
    go(0, 0, 0, 0);
}

