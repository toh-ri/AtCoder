#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	vector<int> angle;
	angle.push_back(0);
	int nowangle = 0;
	for (int i = 0; i < N; i++) {
		nowangle += A.at(i);
		nowangle %= 360;
		angle.push_back(nowangle);
	}
	sort(angle.begin(), angle.end());
	int ans = 0;
	for (int i = 0; i < angle.size() - 1; i++) {
		ans = max(angle.at(i + 1) - angle.at(i),ans);
	}
	ans = max(angle.at(0)+360 - angle.at(angle.size()-1), ans);
	cout << ans << endl;
	return 0;
}
