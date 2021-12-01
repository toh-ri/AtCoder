#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, K;
	cin >> N >> K;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a.at(i);

	int r = -1;
	int64_t sum = 0;
	int64_t ans = 0;
	for (int l = 0; l < N; l++) {
		while (sum < K) {
			r++;
			if (r >= N) {
				cout << ans << endl;
				return 0;
			}
				sum += a.at(r);
		}
		ans += N - r;
		sum -= a.at(l);
	}
	cout << ans << endl;
	return 0;
}