#include <bits/stdc++.h>

using namespace std;

int A[5][5];

int main() {

    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    scanf("%d %d",&N,&M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &A[i][j]);
        }
    }

    int ans = 0;
    for (int s = 0; s < (1 << N*M); s++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            int cur = 0;
            for (int j = 0; j < M; j++) {
                int k = i*M + j;
                if ((s&(1<<k)) == 0) {
                    cur = cur * 10 + A[i][j];
                } else {
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }
        
        for (int j = 0; j < M; j++) {
            int cur = 0;
            for (int i = 0; i < N; i++) {
                int k = i*M + j;
                if ((s&(1<<k)) != 0) {
                    cur = cur * 10 + A[i][j];
                } else {
                    sum += cur;
                    cur = 0;
                }
            }
            sum += cur;
        }
        ans = max(ans, sum);

    }

    cout << ans << '\n';

}

