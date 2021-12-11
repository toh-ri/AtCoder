#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int64_t> x(N), y(N);
	for (int i = 0; i < N; i++) cin >> x.at(i) >> y.at(i);

	map<pair<int64_t, int64_t>, int> pqsame;
	int maxv = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			pair<int64_t, int64_t> pq;
			if (x.at(j) - x.at(i) > 0) {
				pq = make_pair((x.at(j) - x.at(i)), (y.at(j) - y.at(i)));
			}
			else if (x.at(j) - x.at(i) == 0) {
				pq = make_pair((x.at(j) - x.at(i)), abs(y.at(j) - y.at(i)));
			}
			else {
				pq = make_pair((x.at(i) - x.at(j)), (y.at(i) - y.at(j)));
			}

			if (pqsame.count(pq)){
				pqsame.at(pq)++;
				if (pqsame.at(pq) > maxv) maxv = pqsame.at(pq);
			}
			else {
				pqsame[pq] = 0;
			}
		}
	}
	if (N == 1) {
		cout << 1 << endl;
	}
	else {
		cout << N - 1 - maxv << endl;
	}
//	cout << pqsame.size() << endl;
	return 0;

}