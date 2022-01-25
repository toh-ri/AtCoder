#include <bits/stdc++.h>
using namespace std;


int main() {
	int N, M;
	cin >> N >> M;
	vector<int> s(M), c(M);
	for (int i = 0; i < M; i++) {
		int ss;
		cin >> ss >> c[i];
		s[i] = --ss;
	}

	vector<int> ans(N,-1);
	for (int i = 0; i < M; i++) {
		if (ans.at(s.at(i)) == -1||ans.at(s.at(i))==c.at(i)) {
			ans.at(s.at(i)) = c.at(i);
		}
		else {
			cout << -1 << endl;
			return 0;
		}
	}
	if (ans.at(0) == 0&&N!=1) {
		cout << -1 << endl;
		return 0;
	}
	else if(ans.at(0)==-1 && N != 1){
		ans.at(0) = 1;
	}
	for (int i = 0; i < N; i++) {
		if (ans.at(i) == -1)ans.at(i) = 0;
		cout << ans.at(i);
	}
	cout << endl;
	return 0;
}