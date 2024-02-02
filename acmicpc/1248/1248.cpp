#include <bits/stdc++.h>

using namespace std;

int s[11][11];
int a[11];

int N;

bool check(int index) {
    for (int i = 0; i < index; i++) {
        int sum = 0;
        int sign = 0;
        for (int j = i; j < index; j++) {
            sum += a[j];
            if (sum > 0) sign = 1;
            else if (sum < 0) sign = -1;
            else sign = 0;
            
            if (s[i][j] != sign) return false;
        }
    }
    return true;
}

bool go(int index) {
    if (index == N) {
        return check(index);
    }

    if (s[index][index] == 1) {
        for (int i = 1; i <= 10; i++) {
            a[index] = i;
            if (check(index+1) && go(index+1)) return true;
        }
    } else if (s[index][index] == -1) {
        for (int i = -10; i <= -1; i++) {
            a[index] = i;
            if (check(index+1) && go(index+1)) return true;
        }
    } else {
        a[index] = 0;
        if (check(index+1) && go(index+1)) return true;
    }

    return false;
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            char ch;
            cin >> ch;
            if (ch == '-') s[i][j] = -1;
            else if (ch == '+') s[i][j] = 1;
            else s[i][j] = 0;
        }
    }

    go(0);
    for (int i = 0; i < N; i++) {
        cout << a[i] << ' ';
    }
    
}

