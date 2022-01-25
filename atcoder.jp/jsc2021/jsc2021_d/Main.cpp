#include <bits/stdc++.h>
using namespace std;

int64_t mod_pow(int64_t x,int64_t n,int64_t mod) {
	int64_t res = 1;
	while (n > 0) {
		if (n & 1)res = res * x % mod;
		x = x * x % mod;
		n >>= 1;
	}
	return res;
}

int main() {
	int64_t N, P;
	cin >> N >> P;
	int64_t mod= 1000000007;
	int64_t ans = P-1;
	ans = ans * mod_pow(P - 2, N - 1, mod)%mod;
	cout << ans << endl;
	return 0;
}