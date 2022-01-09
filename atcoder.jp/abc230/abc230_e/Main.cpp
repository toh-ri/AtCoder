#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	int64_t ans = 0;
 	for (int64_t i = 1; i*i <= N; i++) {
		if (N / i != i) {
			ans += N / i;
			ans += i * (N / i - N / (i + 1));
		}
		else {
			ans += i;
		}
	}
	cout << ans << endl;
	return 0;
}