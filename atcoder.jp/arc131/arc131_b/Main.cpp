#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<char>> c(H+2, vector<char>(W+2,'.'));
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cin >> c.at(i).at(j);
		}
	}

	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			if (c.at(i).at(j) == '.') {
				set<char> cset;
				cset.insert(c.at(i + 1).at(j));
				cset.insert(c.at(i - 1).at(j));
				cset.insert(c.at(i).at(j + 1));
				cset.insert(c.at(i).at(j - 1));
				for (int k = 1; k <= 5; k++) {
					if (!cset.count('0' + k)) {
						c.at(i).at(j) = '0'+k;
						break;
					}
				}
			}
		}
	}
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cout << c.at(i).at(j);
		}
		cout << endl;
	}
	return 0;
}