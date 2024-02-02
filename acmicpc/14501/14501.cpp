#include <bits/stdc++.h>

using namespace std;

int T[15], P[15];
int N;

int go(int index, int sum) {
    if (index >= N) return sum;

    int ans;
    if (index+T[index] > N) ans = go(index+1, sum);
    else {
        ans = max(go(index+T[index], sum+P[index]), go(index+1, sum));
    }
    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }

    cout << go(0, 0);
    
}

