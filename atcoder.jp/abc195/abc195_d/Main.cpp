#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M, Q;
	cin >> N >> M >> Q;
	vector<pair<int, int>> pkg(N);
	vector<int> X(M);
	for(int i = 0; i < N; i++){
		int a, b;
		cin >> a >> b;
		pkg[i]=make_pair(b, a);
	}
	for (int i = 0; i < M; i++) cin >> X[i];

	sort(pkg.begin(), pkg.end(), greater<pair<int, int>>());

	for (int i = 0; i < Q; i++) {
		int l, r;
		cin >> l >> r;
		l--; r;
		vector<int> box = X;
		box.erase(box.begin() + l, box.begin() + r);
		sort(box.begin(), box.end());
		vector<pair<int, int>> pkg1 = pkg;
		int64_t val = 0;
		for (int j = 0; j < box.size(); j++) {
			for (int k = 0; k < N; k++) {
				if (box[j] >= pkg1[k].second) {
					val += pkg1[k].first;
					pkg1[k].second = 10000000;
					break;
				}
			}
		}
		cout << val << endl;
	}
	return 0;
}
