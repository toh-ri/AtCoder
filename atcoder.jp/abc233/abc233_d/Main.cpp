#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, K;
	cin >> N >> K;
	vector<int64_t> A(N+1);
	map<int64_t,int64_t> mp;
	for (int64_t i = 0; i < N; i++) {
		int64_t a;
		cin >> a;
		A.at(i + 1) = A.at(i) + a;
	}

	int64_t ans = 0;
	for (int64_t i = 0; i < N; i++) {
		mp[A.at(i)]++;
		ans+=mp[A.at(i + 1) - K];
	}
	cout << ans << endl;
	return 0;
}