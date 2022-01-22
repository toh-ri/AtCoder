#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t X, Y, A, B;
	cin >> X >> Y >> A >> B;
	int64_t XA= X;
	int i = 0;
	int64_t  ans = i + (Y - XA-1) / B;
	while (XA <Y&&XA<B) {
		ans = max(ans, i + (Y - XA - 1) / B);
		XA *= A;
		i++;
	}
	cout << ans << endl;
	return 0;
}
