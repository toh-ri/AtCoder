#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, M;
	cin >> N >> M;

	const int64_t INF = (int64_t)1 << 60;

	vector<vector<int64_t>> dp(N, vector<int64_t>(N, INF));

	for (int i = 0; i < M; i++) {
		int a, b;
		int64_t w;
		cin >> a >> b >> w;
		a--; b--;
		dp[a][b] = w;
		dp[b][a] = w;
	}
	for (int i = 0; i < N; i++) dp[i][i] = 0;
	vector<vector<int64_t>> d = dp;

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
	
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			bool flag = false;
			for (int k = 0; k < N; k++) {
				if (k!=i&&k!=j&&d[i][j] != INF && d[i][j] >= dp[i][k] + dp[k][j]) {
					flag = true;
				}
			}
			if (flag) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}