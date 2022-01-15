#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<vector<int>>a(N,vector<int>(2));
	map<int, int> mp;
	map<pair<int, int>, int> mpp;
	for (int i = 0; i < N; i++) {
		cin >> a.at(i).at(0);
		mp[a.at(i).at(0)]++;
		mpp[make_pair(a.at(i).at(0), mp[a.at(i).at(0)])] = i + 1;
	}

	for (int i = 0; i < Q; i++) {
		int x, k;
		cin >> x >> k;
		if (!mpp.count(make_pair(x, k))) {
			cout << -1 << endl;
		}
		else {
			cout << mpp.at(make_pair(x, k))<<endl;
		}
	}
	return 0;
}
