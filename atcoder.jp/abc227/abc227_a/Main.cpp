#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, A;
    cin >> N >> K >> A;
    int ans = 0;
    ans = (A + K - 1) % N;
    if (ans == 0) {
        cout << N << endl;;
    }
    else {
        cout << ans << endl;
    }
   
    return 0;
}