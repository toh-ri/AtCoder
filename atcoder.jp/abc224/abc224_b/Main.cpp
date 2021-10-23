#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<int>> A(H, vector<int>(W));
	bool flag = true;
	for (int i = 0; i < H; i++) {
		for (int j = 0;j < W; j++) {
			cin >> A. at(i).at(j);
		}
	}

	for (int i2 = 0; i2 < H; i2++) {
		for (int j2 = 0; j2 < W; j2++) {
			for (int i = 0; i < i2; i++) {
				for (int j = 0; j < j2; j++) {

						if (A.at(i).at(j) + A.at(i2).at(j2) > A.at(i).at(j2) + A.at(i2).at(j)) flag=false;
				}
			}
		}
	}
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
	return 0;
}
