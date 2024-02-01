#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int digit = 1;
    int tmp = N;
    while (tmp / 10) {
        tmp /= 10;
        digit += 1;
    }

    int ans = 0;

    for (int i = 1; i <= 9; i++) {
        if (digit == i) {
            ans += (N - pow(10, digit-1) + 1) * digit;
            break;
        }
        ans += (pow(10, i) - pow(10, i-1)) * i;
    }

    cout << ans;   
}

