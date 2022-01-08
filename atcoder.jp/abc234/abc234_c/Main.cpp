#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t K;
	cin >> K;
	string ans;
	int64_t num = (int64_t)pow(2,62);
	bool flag = false;
	while (num != 1) {
		if (K / num > 0) {
			flag = true;
		}
		if (flag) {
			if (K / num > 0) {
				ans += "2";
				K -= num;
			}
			else {
				ans += "0";
			}
		}
		num /= 2;
	}
	if (K == 1) {
		ans += "2";
	}
	else {
		ans += "0";
	}
	cout << ans << endl;
	return 0;
}