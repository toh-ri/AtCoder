#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W, N;
	cin >> H >> W >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a.at(i);

	vector<vector<int>> ans(H, vector<int>(W));
	int num = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < a.at(i); j++) {
			if (num / W % 2 == 0) {
				ans.at(num / W).at(num % W) = i + 1;
			}
			else {
				ans.at(num / W).at(W - (num % W) - 1) = i + 1;
			}
			num++;
		}
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (j == 0) {
				cout << ans.at(i).at(j);
			}
			else if (j == W - 1) {
				cout << " " << ans.at(i).at(j) ;
			}
			else {
				cout << " " << ans.at(i).at(j);
			}
		}
		cout << endl;
	}
	return 0;
}