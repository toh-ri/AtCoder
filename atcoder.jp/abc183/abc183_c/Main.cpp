#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<vector<int>> T(N, vector<int>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> T[i][j];
		}
	}
	int ans = 0;
	vector<int> ord(N-1);
	for (int i = 0; i < N-1; i++) ord[i] = i + 2;
	do {
		int sum = T[0][ord[0] - 1];
		for (int i = 0; i < N - 2; i++) {
			sum += T[ord[i] - 1][ord[i + 1] - 1];
		}
		sum += T[ord[N - 2]-1][0];
		if (sum == K) ans++;
	} while (next_permutation(ord.begin(), ord.end()));
	cout << ans << endl;
	return 0;
}