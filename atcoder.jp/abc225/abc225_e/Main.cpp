#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<long double, long double>> fu(N);
    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        fu.at(i).first = (long double)y / (x - 1);
        fu.at(i).second = (long double)(y - 1) / x;
    }

    sort(fu.begin(), fu.end());
    long double argend = 0;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (argend > fu.at(i).second) continue;
        argend = fu.at(i).first;
        ans++;
    }
    cout << ans << endl;
    return 0;
}