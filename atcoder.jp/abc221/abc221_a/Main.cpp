#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, ans=0;
	cin >> A >> B;
	ans = pow(32, A - B);
	cout << ans;
	return 0;
}