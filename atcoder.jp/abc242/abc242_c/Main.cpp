#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	int64_t mod = 998244353;
	vector<vector<int>> dp(N, vector<int>(11,0));

	for (int i = 1; i < 10; i++) {
		dp.at(0).at(i) = 1;
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = 1; j < 10; j++) {
			dp.at(i + 1).at(j) = ((dp.at(i).at(j - 1) + dp.at(i).at(j))%mod + dp.at(i).at(j + 1))%mod;
		}
	}
	
	int64_t ans = 0;
	for (int i = 0; i < 10; i++) {
		ans += dp.at(N - 1).at(i) % mod;
	}
	cout << ans % mod << endl;
	return 0;
}