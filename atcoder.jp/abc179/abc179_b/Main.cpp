#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> D(N, vector<int>(2));
	for (int i = 0; i < N; i++) {
		cin >> D.at(i).at(0) >> D.at(i).at(1);
	}
	bool flag = false;
	for (int i = 2; i < N; i++) {
		if (D[i - 2][0] == D[i - 2][1] && D[i - 1][0] == D[i - 1][1] && D[i][0] == D[i][1]) {
			flag = true;
		}
	}
	if (flag) {
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}

