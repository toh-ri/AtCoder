#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t N;
    cin >> N;
    int64_t ans = 0;
    for (int64_t i = 1; i*i*i <= N; i++) {
        for (int64_t j = i; j *j<= N/i; j++) {
            int64_t k = N / (i * j);
           ans += k - j + 1;
        }
    }
    cout << ans << endl;
    return 0;
}