#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int ans = 0;
	ans = max(max(A + B, A - B), A * B);
	cout << ans << endl;
	return 0;
}
