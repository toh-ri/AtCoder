#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	vector<vector<char>> s(H + 2, vector<char>(W + 2));
	for (int i = 1; i < H+1; i++) {
		for (int j = 1; j < W+1; j++) {
			cin >> s.at(i).at(j);
		}
	}
	for (int i = 1; i < H + 1; i++) {
		for (int j = 1; j < W + 1; j++) {
			if (s.at(i).at(j) == '#') {
				if (s.at(i - 1).at(j) != '#' && s.at(i).at(j - 1) != '#' && s.at(i).at(j + 1) != '#' && s.at(i + 1).at(j) != '#') {
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Yes" << endl;
		return 0;
}