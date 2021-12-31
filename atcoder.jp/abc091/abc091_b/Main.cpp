#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N;
	map<string, int> mp;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		mp[s]++;
	}
	cin >> M;
	int maxs = 0;
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		mp[s]--;
	}
	int ans = 0;
	for (auto x : mp) {
		ans = max(ans, x.second);
	}
	cout << ans << endl;
	return 0;
}