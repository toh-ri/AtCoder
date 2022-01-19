#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> a(N);
	for (int i = 0; i < M; i++) cin>>a.at(i);
	int modi = 1000000007;

	vector<int> dp(N + 1);
	dp[0] = dp[1] = 1;
	for (int i = 0; i < M; i++) {
		dp[a.at(i)] = -1;
	}
	for (int i = 2; i <= N; i++) {
		if (dp[i] != -1) {
			if (dp[i - 2] != -1) dp[i] += dp[i - 2] % modi;
			dp[i] %= modi;
			if (dp[i - 1] != -1)dp[i] += dp[i - 1]%modi;
			dp[i] %= modi;
		}
	}
	cout << dp[N] << endl;

		return 0;
}