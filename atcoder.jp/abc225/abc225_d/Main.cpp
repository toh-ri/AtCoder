#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> A(N, vector<int>(2));

	for (int ii = 0; ii < M; ii++) {
		int num = 0;
		cin >> num;
		if (num == 1) {
			int x, y;
			cin >> x >> y;
			A.at(x - 1).at(1) = y;
			A.at(y - 1).at(0) = x;
		}
		else if (num == 2) {
			int x, y;
			cin >> x >> y;
			A.at(x - 1).at(1) = 0;
			A.at(y - 1).at(0) = 0;
		}
		else {
			int x,j,jj=1;
			cin >> x;
			string S;
			S = to_string(x);
			j = x;
			while (A.at(j - 1).at(0) != 0) {
				S.insert(0, " ");
				S.insert(0, to_string(A.at(j - 1).at(0)));
				jj++;
				j = A.at(j - 1).at(0);
			}
			j = x;
			while (A.at(j - 1).at(1) != 0) {
				S += " ";
				S+=to_string(A.at(j - 1).at(1));
				jj++;
				j = A.at(j - 1).at(1);
			}
			S.insert(0, " ");
			S.insert(0, to_string(jj));
			cout << S << endl;

		}
	}

	
	return(0);
}
