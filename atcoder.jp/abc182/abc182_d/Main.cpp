#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	int64_t ans = 0,pos=0;
	int64_t asum = 0, asummax = 0;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		asum += a;
		asummax = max(asummax, asum);
		ans = max(ans, pos + asummax);
		pos += asum;
	}
	cout << ans << endl;
	return 0;
}