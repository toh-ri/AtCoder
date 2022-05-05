#include <bits/stdc++.h>
using namespace std;

int main() {
	const int INF = 1000000300;
	int N;
	cin >> N;

	vector<int> X(N), Y(N);
	for (int i = 0; i < N; i++) {
		cin >> X.at(i) >> Y.at(i);
	}
	string S;
	cin >> S;

	map<int, pair<int, int>> mp;
	for (int i = 0; i < N; i++) {
		if (!mp.count(Y.at(i))) {
			if (S.at(i) == 'L') {
				mp[Y.at(i)]= make_pair(INF, X.at(i));
			}
			else {
				mp[Y.at(i)] = make_pair(X.at(i),-INF);
			}
		}
		else {
			if (S.at(i) == 'L') {
				mp.at(Y.at(i)) = make_pair(mp.at(Y.at(i)).first, max(X.at(i), mp.at(Y.at(i)).second));
			}
			else {
				mp.at(Y.at(i)) = make_pair(min(X.at(i), mp.at(Y.at(i)).first), mp.at(Y.at(i)).second);
			}
		}
	}
	for (auto a : mp) {
		if (a.second.first < a.second.second) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}