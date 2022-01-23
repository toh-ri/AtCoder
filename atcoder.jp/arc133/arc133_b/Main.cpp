#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	const int INF = 1000000000;
	vector<int> P(N), Q(N),Q2(N);
	for (int i = 0; i < N; i++) cin >> P.at(i);
	for (int i = 0; i < N; i++) cin >> Q.at(i);
	for (int i = 0; i < N; i++) {
		Q2.at(--Q.at(i)) = i;
	}
	
	vector<int> PQ;
	for (int i = 0; i < N; i++){
		vector<int> PQ2;
		for (int j = 1; P.at(i) * j <= N; j++) {
			PQ2.push_back(Q2.at(P.at(i) * j-1));
		}
		sort(PQ2.begin(), PQ2.end(), greater<int>());
		for (int j = 0; j < PQ2.size(); j++) {
			PQ.push_back(PQ2.at(j));
		}
	}
	

	vector<int> dp(PQ.size(),INF);
	for (int i = 0; i < PQ.size(); i++) {
		*lower_bound(dp.begin(), dp.end(), PQ.at(i)) = PQ.at(i);
	}
	cout << lower_bound(dp.begin(), dp.end(), INF)-dp.begin() << endl;
	

		return 0;
}