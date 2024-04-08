#include <bits/stdc++.h>

using namespace std;

int A[51][51];
int B[51][51];

void change(int x, int y) {
    for (int i = x-1; i <= x+1; i++) {
        for (int j = y-1; j <= y+1; j++) {
            if (A[i][j] == 0) A[i][j] = 1;
            else A[i][j] = 0;
        }
    }
}

int main() {

    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &B[i][j]);
        }
    }

    int ans = 0;
    for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < M-1; j++) {
            if (A[i-1][j-1] != B[i-1][j-1]) {
                change(i, j);
                ans++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] != B[i][j]) {
                cout << -1;
                return 0;
            }
        }
    }
    
    cout << ans;

}

