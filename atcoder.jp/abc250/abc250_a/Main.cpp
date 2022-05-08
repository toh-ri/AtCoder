#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W, R, C;
	cin >> H >> W >> R >> C;
	int ans = 4;
	if (R - 1 == 0)ans -= 1;
	if (C - 1 == 0)ans -= 1;
	if (R == H)ans -= 1;
	if (C == W)ans -= 1;
	cout << ans << endl;
	return 0;
}
