#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	int mod = 998244353;
	for (int i = 0; i < T; i++) {
		int N;
		string S;
		cin >> N >> S;

		int64_t ans = 0;
		bool flag = true;
		if (N > 1) {
			for (int j = N / 2 - 1; j >= 0; j--) {
				if (S.at(j) < S.at(N - 1 - j)) {
					flag = true;
					break;
				}
				else if (S.at(j) > S.at(N - 1 - j)) {
					flag = false;
					break;
				}
			}
		}

		for (int j = 0; j < (N-1) / 2; j++) {
			ans *= 26;
			ans += (int64_t)S.at(j) - 'A';
			ans = ans % mod;
		}
		if (N > 0) {
			
			if (flag) {
				ans *= 26;
				ans += 1+(int64_t)S.at((N - 1) / 2) - 'A';
				ans = ans % mod;
			}
			else {
				ans *= 26;
				ans += (int64_t)S.at((N - 1) / 2) - 'A';
				ans = ans % mod;

			}
		}
		else {
			ans += 1 + (int64_t)S.at(0) - 'A';
			ans = ans % mod;
		}
		cout << ans % mod << endl;
	}
	return 0;
}