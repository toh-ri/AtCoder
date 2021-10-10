#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<int>> C(3, vector <int>(3));
	for (int j = 0; j < 3;j++) {
		for (int i = 0; i < 3; i++) {
			cin >> C.at(i).at(j);
		}
	}
	if (C[0][0] + C[1][1] + C[2][2] == C[0][1] + C[1][2] + C[2][0]
		&& C[0][0] + C[1][1] + C[2][2] == C[0][2] + C[1][0] + C[2][1]) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return(0);





}
