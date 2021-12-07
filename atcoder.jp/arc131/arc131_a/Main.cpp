#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t A, B;
	cin >> A >> B;

	int64_t ans = 0;

	ans += A * 1000000000;
	ans += B *5;

	cout << ans << endl;

	return 0;
}