#include <bits/stdc++.h>
using namespace std;

int main() {
	int H;
	cin >> H;
	long double ans = 0;
	ans = sqrt((double)H * (12800000 + H));
	cout << setprecision(15) << ans << endl;
	return 0;
}
