#include <bits/stdc++.h>
using namespace std;


int main() {
    int64_t N, M;
    cin >> N >> M;
    int64_t ans = 0;
    if (2 * N >= M) {
        ans = M / 2;
    }
    else {
        ans = N + (M - 2 * N) / 4;
    }
    cout << ans << endl;
    return 0;
}
