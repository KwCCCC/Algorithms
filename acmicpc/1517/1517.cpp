#include <bits/stdc++.h>

using namespace std;

int A[500000];
int B[500000];

long long solve(int start, int end) {
    if (start == end) return 0;
    int mid = (start + end) / 2;
    long long ans = solve(start, mid) + solve(mid+1, end);

    int i = start;
    int j = mid+1;
    int k = 0;

    while (i <= mid && j <= end) {
        if (A[i] <= A[j]) B[k++] = A[i++];
        else {
            ans += (long long)(mid-i+1);
            B[k++] = A[j++];
        }
    }

    while (i <= mid) B[k++] = A[i++];
    while (j <= end) B[k++] = A[j++];

    for (int i = start; i <= end; i++) {
        A[i] = B[i-start];
    }

    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << solve(0, N-1);
}

