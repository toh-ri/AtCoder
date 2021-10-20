#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int ans = 0;

	ans = max(A, max(B, C)) - min(A, min(B, C));
	cout << ans << endl;

}
