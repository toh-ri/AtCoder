#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }
    int ans = 0;
    for (int ii = 0; ii < N; ii++) {
        bool flag = false;
        for (int i = 1; i <= 143; i++) {
            for (int j = 1; j <= i; j++) {
                if (4 * i*j + 3 * i + 3 * j == S.at(ii)) {
                    flag = true;
                }
            }
        }
        if (flag) ans++;
    }
    cout <<N-ans << endl;
    return 0;
}