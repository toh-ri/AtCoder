#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, N;
	cin >> N;

	vector<string> S(N);
	map <string, int> Map;

	for (i = 0; i < N; i++) {
		cin >> S.at(i);
	}
	for (i = 0; i < N; i++) {
		if (Map[S.at(i)] == 0) {
			cout << i+1 << endl;
			Map.at(S.at(i)) = 1;
		}

	}
	return 0;
}