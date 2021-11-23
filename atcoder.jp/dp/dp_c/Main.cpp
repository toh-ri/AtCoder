#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> abc(N, vector<int>(3));
	for (int i = 0; i < N; i++) cin >> abc.at(i).at(0) >> abc.at(i).at(1) >> abc.at(i).at(2);

	vector<vector<int>> dp(N + 1, vector<int>(3));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (j != k)dp.at(i + 1).at(j) = max(dp.at(i + 1).at(j), dp.at(i).at(k)+abc.at(i).at(k));
			}
		}
	}
		cout << max(dp.at(N).at(0),max(dp.at(N).at(1),dp.at(N).at(2)))<< endl;
		return(0);

}
