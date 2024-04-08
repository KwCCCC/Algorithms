#include <bits/stdc++.h>

using namespace std;

int A[100001];
int tmp[100001];
int B[100001];

void flip(int i) {
    A[i-1] = 1 - A[i-1];
    A[i] = 1 - A[i];
    A[i+1] = 1 - A[i+1];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%1d", &A[i]);
        tmp[i] = A[i];
    }

    for (int i = 1; i <= N; i++) {
        scanf("%1d", &B[i]);
    }

    int ans1 = 0;
    for (int i = 2; i <= N; i++) {
        if (A[i-1] != B[i-1]) {
            ans1++;
            flip(i);
        }
    }
    if (A[N] != B[N]) ans1 = -1;

    for (int i = 1; i <= N; i++) {
        A[i] = tmp[i];
    }

    flip(1);
    int ans2 = 1;
    for (int i = 2; i <= N; i++) {
        if (A[i-1] != B[i-1]) {
            ans2++;
            flip(i);
        }
    }
    if (A[N] != B[N]) ans2 = -1;
    
    if (ans1 != -1 && ans2 != -1) printf("%d", min(ans1, ans2));
    else printf("%d", max(ans1, ans2));

}

