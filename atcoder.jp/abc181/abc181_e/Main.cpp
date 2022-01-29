#include <bits/stdc++.h>
using namespace std;


int main() {
	int64_t N,M;
	cin >> N>>M;
	vector<int64_t> H(N+2), W(M);
	int64_t INF = 1000010000;
	H[0] = -INF;
	H[N + 1] = INF;
	for (int i = 1; i <= N; i++) cin >> H[i];
	for (int i = 0; i < M; i++) cin >> W[i];

	sort(H.begin(), H.end());
	vector<int64_t> H1(N / 2+1), H2(N / 2+1);
	H1[0] = 0;
	H2[0] = 0;
	for (int i =0; i < N/2; i++) {
		H1[i+1] = H1[i]+H.at(i * 2+2) - H.at(i * 2+1);
		H2[i+1] = H2[i]+H.at(N - i * 2) - H.at(N - i * 2-1);
	}
	int64_t ans = INF;
	for (int i = 0; i < M; i++) {
		int64_t j = (lower_bound(H.begin(), H.end(), W[i]) - H.begin());
		ans = min(ans, H1.at((j-1)/ 2) + abs(H.at(((j-1)/ 2 )* 2+1)-W.at(i)) + H2.at(N / 2 - (j - 1) / 2));
	}
	cout << ans << endl;
	return 0;
}