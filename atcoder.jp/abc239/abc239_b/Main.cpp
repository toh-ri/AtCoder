#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t X;
	cin >> X;
	int64_t ans = 0;
	if (X >= 0) {
		ans = (X) / 10;
	}
	else {
		ans = (X+1) / 10-1;
	}
	
	cout << ans << endl;
	return 0;
}
