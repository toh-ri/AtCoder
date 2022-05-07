#include <bits/stdc++.h>
using namespace std;

int main() {
	const int64_t mod = 998244353;
	int64_t N, M, K, S, T, X;
	cin >> N >> M >> K >> S >> T >> X;

	vector<pair<int, int>> UV(M);

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		UV.at(i) = make_pair(a, b);
	}

	vector<vector<int64_t>> dp0(K+1, vector<int64_t>(N,0));
	vector<vector<int64_t>> dp1(K+1, vector<int64_t>(N,0));
	dp0.at(0).at(S - 1) = 1;

	for (int i = 1; i <=K; i++) {
		for (int j = 0; j < M; j++) {
			if (UV.at(j).first != X - 1 && UV.at(j).second != X - 1) {
				dp0.at(i).at(UV.at(j).first) += dp0.at(i-1).at(UV.at(j).second);
				dp0.at(i).at(UV.at(j).second) += dp0.at(i - 1).at(UV.at(j).first);
				dp1.at(i).at(UV.at(j).first) += dp1.at(i - 1).at(UV.at(j).second);
				dp1.at(i).at(UV.at(j).second) += dp1.at(i - 1).at(UV.at(j).first);
				}
			else if(UV.at(j).first == X - 1){
				dp0.at(i).at(UV.at(j).first) += dp1.at(i - 1).at(UV.at(j).second);
				dp0.at(i).at(UV.at(j).second) += dp0.at(i - 1).at(UV.at(j).first);
				dp1.at(i).at(UV.at(j).first) += dp0.at(i - 1).at(UV.at(j).second);
				dp1.at(i).at(UV.at(j).second) += dp1.at(i - 1).at(UV.at(j).first);
			}
			else {
				dp0.at(i).at(UV.at(j).first) += dp0.at(i - 1).at(UV.at(j).second);
				dp0.at(i).at(UV.at(j).second) += dp1.at(i - 1).at(UV.at(j).first);
				dp1.at(i).at(UV.at(j).first) += dp1.at(i - 1).at(UV.at(j).second);
				dp1.at(i).at(UV.at(j).second) += dp0.at(i - 1).at(UV.at(j).first);
			}
			dp0.at(i).at(UV.at(j).first) %= mod;
			dp0.at(i).at(UV.at(j).second) %= mod;
			dp1.at(i).at(UV.at(j).first) %= mod;
			dp1.at(i).at(UV.at(j).second) %= mod;
		}
	}

	cout << dp0.at(K).at(T - 1) << endl;
	return 0;
}