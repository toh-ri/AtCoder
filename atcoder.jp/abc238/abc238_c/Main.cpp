#include <bits/stdc++.h>
using namespace std;

int main() {
	const int64_t modint = 998244353;
	int64_t N;
	cin >> N;
	string Ns = to_string(N);
	int b = Ns.size();
	int64_t ans = 0;
	for (int i = 1; i<b; i++) {
		int64_t val = 1, powi = (int64_t)pow(10, i-1);
		if (powi % 2 == 0) {
			val *= (9 * powi/2) % modint;
			val *= (2 + (9 * powi - 1)) % modint;
		}
		else {
			val *= (9 * powi ) % modint;
			val *= ( 1 + (9 * powi - 1)/2) % modint;
		}
		ans += val;
		ans %= modint;
	}
	int64_t valb = 1, powb = (int64_t)pow(10, b-1);
	if ((N - powb + 1) % 2 == 0) {
		valb *= ((N - powb + 1) / 2) % modint;
		valb *= (2  % modint + ((N - powb + 1) - 1) % modint) % modint;
	}
	else {
		valb *= ((N - powb + 1)) % modint;
		valb *= (1% modint + ((N - powb + 1) - 1)/2 % modint) % modint;
	}
	ans += valb;
	ans %= modint;
	cout << ans << endl;
	return 0;
}
