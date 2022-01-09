#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> Gt(N, vector<int>(N)), Ga(N, vector<int>(N));
	for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			a--; b--;
			Gt[a][b] = Gt[b][a] = 1;
	}
	for (int i = 0; i < M; i++) {
			int c, d;
			cin >> c >> d;
			c--; d--;
			Ga[c][d] = Ga[d][c] = 1;
	}
	vector<int> p(N);
	for (int i = 0; i < N; i++) p[i] = i;
	
	do {
		bool flag = true;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (Gt[i][j] != Ga[p[i]][p[j]]) flag = false;
			}
		}
		if (flag) {
			cout << "Yes" << endl;
			return 0;
		}
	} while (next_permutation(p.begin(), p.end()));
	cout << "No" << endl;
	return 0;
}