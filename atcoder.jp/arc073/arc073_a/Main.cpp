#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, T;
	cin >> N >> T;
	int64_t INF = 100000000000000;
	vector<int64_t> t(N);
	for (int i = 0; i < N; i++)cin >> t.at(i);
	t.push_back(INF);
	int64_t Tbegin = 0, Tend = T, now = 0, ans = 0;

	for (int i = 0; now!=INF; i++) {
		auto iter=prev(lower_bound(t.begin(), t.end(), Tend));
		int ti = *iter;
		if (ti!=now) {
			now = ti;
			Tend = ti + T;
		}
		else {
			ans += Tend - Tbegin;
			now = *(++iter);
			Tbegin = now;
			Tend = now + T;
		}
	}
	cout << ans << endl;
	return 0;
}