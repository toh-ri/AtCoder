#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C,K;
	cin >> A >> B >> C>>K;
	int ans = 0;
	ans = min(A, K) - max(K - A - B, 0);
	cout << ans << endl;
	return 0;
}


