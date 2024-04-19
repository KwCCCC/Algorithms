#include <bits/stdc++.h>

using namespace std;

struct Student {
    int kor, eng, math;
    string s;
};

bool cmp(const Student &u, const Student &v) {
    if (u.kor > v.kor) return true;
    else if (u.kor == v.kor) {
        if (u.eng < v.eng) return true;
        else if (u.eng == v.eng) {
            if (u.math > v.math) return true;
            else if (u.math == v.math) {
                if (u.s < v.s) return true;
            }
        }
    }
    return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Student> A(N);

    for (int i = 0; i < N; i++) {
        string s;
        int kor, eng, math;
        cin >> s >> kor >> eng >> math;
        A[i].kor = kor;
        A[i].eng = eng;
        A[i].math = math;
        A[i].s = s;
    }

    sort(A.begin(), A.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << A[i].s << '\n';
    }
    
}

