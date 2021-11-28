#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int64_t ans = 0;
    int64_t cnt = 1;
    S = S + "A";
    for (int i = 1; i <= N; i++) {
        if (S.at(i - 1) == S.at(i)) {
            cnt++;
        }
        else {
            ans += cnt * (cnt - 1) / 2;
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}