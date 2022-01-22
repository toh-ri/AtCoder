#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t A, B, C;
	cin >> A >> B >> C;
	int64_t ans = 1;
	int64_t exp = 0;

	if (B%4==2&&C != 1) {
		exp = 4;
	}
	else {
		if (C%2==0) {
			B *= B;
		}
		if (B % 4 == 0) {
			exp = 4;
		}else{
			exp = B % 4;
		}
		
	}
	for (int i = 0; i < exp; i++) {
		ans *= (A % 10);
		ans %= 10;
	}
	cout << ans << endl;
	return 0;
}
