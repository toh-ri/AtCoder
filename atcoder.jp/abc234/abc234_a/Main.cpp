#include <bits/stdc++.h>
using namespace std;

int64_t func(int64_t t) {
	return t*t+2*t+3;
}
int main() {
	int64_t t;
	cin >> t;

	int64_t ans = func(func(func(t) + t) + func(func(t)));

	cout << ans << endl;

	return 0; 
}
