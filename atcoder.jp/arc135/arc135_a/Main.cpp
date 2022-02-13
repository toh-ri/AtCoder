#include <bits/stdc++.h>
using namespace std;

const int64_t modi = 998244353;
map<int64_t, int64_t> mp;
int64_t func(int64_t x) {
	if (mp.count(x)) return mp[x];

	if (x <= 4) {
		mp[x] = x;
		return x;
	}
	else {
		if (x % 2 == 0) {
			if (!mp.count(x / 2)) mp[x / 2] = func(x / 2)%modi;
			return mp[x/2]*mp[x/2] % modi;
		}
		else {
			if (!mp.count(x / 2)) mp[x / 2] = func(x / 2) % modi;
			if (!mp.count(x / 2+1)) mp[x / 2+1] = func(x / 2+1) % modi;
			return mp[x/2]*mp[x/2+1] % modi;
		}
	}
}
int main() {
	
	int64_t X;
	cin >> X;

	int64_t ans = func(X);
	cout << ans << endl;

	return 0;
}
