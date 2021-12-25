#include <bits/stdc++.h>
using namespace std;

int func(const vector<vector<int64_t>> &box, int64_t N,int64_t n, int64_t K,int64_t num,int64_t &ans) {
	if (n == N) {
//		cout << num << endl;
		if (num == K) ans++;
		return 0;
	}
	for (auto c : box.at(n)) {
		if (num > K / c)continue;
		func(box, N, n+1, K,num*c, ans);
	}
	return 0;
}
int main() {
	int64_t N, X;
	cin >> N >> X;
	vector<vector<int64_t>> box(N);
	for (int64_t i = 0; i < N; i++) {
		int64_t L;
		cin >> L;
//		box.at(i).push_back(L);
		for (int64_t j = 0; j < L; j++) {
			int64_t a;
			cin >> a;
			box.at(i).push_back(a);
		}
	}
	int64_t ans = 0;
	func(box, N, 0, X,(int64_t)1,ans);
	cout << ans << endl;
	return 0;
}
