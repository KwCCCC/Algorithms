#include <bits/stdc++.h>

using namespace std;

int digit(int N) {
    int tmp = N;
    int digit = 0;
    while (tmp > 0) {
        tmp /= 10;
        digit += 1;
    }

    int res = 0;
    for (int i = 1; i < digit; i++) {
        res += (9 * pow(10, i-1)) * i;
    }
    res += (N-pow(10, digit-1)+1) * digit;
    return res;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, k;
    cin >> N >> k;
    
    int left, right, mid;
    left = 1; right = N;
    
    while (left < right) {
        mid = (left + right) / 2;
        if (digit(mid) < k) left = mid+1;
        else right = mid;
    }

    if (k > digit(left)) cout << -1;
    else {
        cout << to_string(left)[k-digit(left-1)-1];
    }

}

