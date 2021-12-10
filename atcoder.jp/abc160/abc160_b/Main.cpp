#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	cin >> X;

	int64_t ans = 0;
	ans += X / 500 * 1000;
	ans += (X % 500 )/ 5 * 5;
	cout << ans << endl;
	return 0;
}