#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	const int64_t INF = ((int64_t)1 << 60);
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	vector<vector<int64_t>> dp1(N, vector<int64_t>(2));
	vector<vector<int64_t>> dpN(N, vector<int64_t>(2));
	dp1[0][0] = INF;
	dp1[0][1] = A.at(0);
	dpN[0][1] = INF;

	for (int i = 1; i < N; i++) {
		dp1[i][0] = dp1[i - 1][1];
		dpN[i][0] = dpN[i - 1][1];
		dp1[i][1] = min(dp1[i - 1][0], dp1[i - 1][1]) + A.at(i);
		dpN[i][1] = min(dpN[i - 1][0], dpN[i - 1][1]) + A.at(i);
	}

	cout << min(min(dp1[N - 1][1], dp1[N - 1][0]), dpN[N - 1][1]) << endl;


	return 0;
}