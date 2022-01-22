#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	vector<int64_t> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	sort(A.begin(), A.end());
	int64_t ans = 0;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			ans += 0;
		}
		else if (i == 1) {
			ans += A.at(N - 1);
		}
		else {
			ans += A.at(N - 1 - i / 2);
		}
	}
	cout << ans << endl;
	return 0;
}
