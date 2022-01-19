#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int64_t ans1 = 1, ans2 = 1, ans3 = 1;;
	int mod = 1000000007;
	if (N < 2) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		ans1 *= 10;
		ans1 %= mod;
	}
	for (int i = 0; i < N; i++) {
		ans2 *= 8;
		ans2 %= mod;
	}
	for (int i = 0; i < N; i++) {
		ans3 *= 9;
		ans3 %= mod;
	}
	cout << ((ans1+ans2)%mod-(ans3+ans3)%mod+mod)%mod<< endl;
	return 0;
}