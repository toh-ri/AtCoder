#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	set<string> st;
	vector<pair<int64_t, int64_t>> original;

	for (int64_t i = 0; i < N; i++) {
		string S;
		int64_t T;
		cin >> S >> T;
		if (!st.count(S)) {
			st.insert(S);
			original.push_back(make_pair(T, i));
		}
	}
	sort(original.begin(), original.end());
	int64_t Tmax = original.at(original.size() - 1).first;
	int64_t Pmin = 1000040000;
	for (int i = 0; i < original.size(); i++) {
		if (original.at(i).first == Tmax) {
			Pmin = min(Pmin,original.at(i).second);
		}
	}
	cout << Pmin+1 << endl;
	return 0;
}