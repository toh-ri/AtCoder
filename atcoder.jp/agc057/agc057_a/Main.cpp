#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int64_t L, R;
		cin >> L >> R;
		int64_t n = to_string(R).size();
		int64_t n10 = (int)pow(10, n - 1);
		if (L < min(n10-max((int64_t)0,R/10-R+n10), R - n10 + 1 - max((int64_t)0, R / 10 - R + n10))) {
			cout << max(n10 - max((int64_t)0, R / 10 - R + n10), R - n10 + 1 - max((int64_t)0, R / 10 - R + n10)) << endl;
		}
		else {
			cout << R - max(L,R/10+1) + 1 << endl;
		}
	}

	return 0;
}