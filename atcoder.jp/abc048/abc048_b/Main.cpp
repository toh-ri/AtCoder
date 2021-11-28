#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t a, b, x;
    cin >> a >> b >> x;
    int64_t ans;
    ans = b / x - a / x ;
    if (a % x == 0)ans++;
   
    cout << ans<< endl;

    return 0;
}