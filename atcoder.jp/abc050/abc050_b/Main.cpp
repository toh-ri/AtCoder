#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
	cin >> N ;
	vector<int> T(N);
	for (int i = 0; i < N; i++) cin >> T.at(i);
	int64_t sum = 0;
	cin >> M;
	vector<int> P(M), X(M);
	
	for (int i = 0; i < M; i++) {
		cin >> P.at(i) >> X.at(i);
	}

	for (int i = 0; i < N; i++) {
		sum += T.at(i);
	}
	

	for (int i = 0; i < M; i++) {
		cout << sum-T.at(P.at(i)-1)+X.at(i) << endl;
	}
	return(0);

}
