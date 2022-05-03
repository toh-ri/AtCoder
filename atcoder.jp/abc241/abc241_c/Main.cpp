#include <bits/stdc++.h>
using namespace std;

bool func(vector<vector<char>>&V, int x, int y, int dx, int dy) {
	int cnt = 0;
	int xi = x;
	int yi = y;
	for (int i = 0; i < 6; i++) {
		if (V.at(xi).at(yi) == '.') {
			cnt++;
		}
		xi += dx;
		yi += dy;
	}
	if (cnt <= 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int N;
	cin >> N;
	vector<vector<char>> V(N, vector<char>(N));

	for (int i = 0; i < N; i++) {
		string S;
		cin >> S;
		for (int j = 0; j < N; j++) {
			V.at(i).at(j) = S.at(j);
		}
	}

	for (int i = 0; i < N - 5; i++) {
		for (int j = 0; j < N; j++) {
			if (func(V, i, j, 1, 0)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 5; j++) {
			if (func(V, i, j, 0, 1)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	for (int i = 0; i < N - 5; i++) {
		for (int j = 0; j < N - 5; j++) {
			if (func(V, i, j, 1, 1)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	for (int i = 0; i < N-5; i++) {
		for (int j = 5; j < N; j++) {
			if (func(V, i, j, 1, -1)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No";
	return 0;
}