#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, W;
	cin >> N >> W;
	vector<int> w(N), v(N);
	for (int i = 0; i < N; i++) cin >> w.at(i) >> v.at(i);

	vector<vector<int64_t>> dp(N + 1, vector<int64_t>(W + 1));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= W; j++) {
			dp.at(i + 1).at(j) = max(dp.at(i).at(j), dp.at(i + 1).at(j));
			if (j - w.at(i) >= 0) dp.at(i + 1).at(j) = max(dp.at(i).at(j - w.at(i)) + v.at(i), dp.at(i + 1).at(j));
		}
	}
	int64_t ans = 0;
	for (int j = 0; j <= W; j++) {
		ans = max(ans, dp.at(N).at(j));
	}
	cout << ans << endl;
		return(0);

}
