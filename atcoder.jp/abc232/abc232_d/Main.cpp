#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<bool>> Grid(H + 2, vector<bool>(W + 2, false));
	for (int i=0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			char a;
			cin >> a;
			if (a == '.')Grid[i + 1][j + 1] = true;
		}
	}
	vector<vector<int>> dp(H, vector<int>(W));
	dp[0][0] = 1;
	int maxn = 1;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (dp[i][j]>0 && j < W - 1) {
				if (Grid[i + 1][j + 2])dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + 1);
				if (dp[i][j + 1] > maxn) maxn = dp[i][j + 1];
			}
			if (dp[i][j] > 0 && i < H - 1) {
				if (Grid[i + 2][j + 1])dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + 1);
				if (dp[i + 1][j] > maxn) maxn = dp[i + 1][j];
			}
		}
	}
	cout << maxn << endl;
	return 0;
}