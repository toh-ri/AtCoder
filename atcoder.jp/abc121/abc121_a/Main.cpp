#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	int h, w;
	cin >> h >> w;
	int ans = 0;
	ans = H * W - h * W - H * w + h * w;
	cout << ans << endl;
	return 0;
}



