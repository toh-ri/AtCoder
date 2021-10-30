#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int64_t>> B(N, vector<int64_t>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> B.at(i).at(j);
		}
	}
	
	bool flag = true;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i + 1 < N) {
				if(B.at(i + 1).at(j) - B.at(i).at(j) != 7) flag = false;
			}
			if (j + 1 < M) {
				if (B.at(i).at(j + 1) - B.at(i).at(j) != 1) flag = false;
			}
			if (j != M - 1 && B.at(i).at(j) % 7 == 0) flag = false;
		} 
	}
	if (flag) {
		cout << "Yes"	<< endl;
	}
	else {
		cout << "No" << endl;
	}
	
	return(0);
}
