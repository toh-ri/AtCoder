#include <bits/stdc++.h>
using namespace std;

int main() {
	string X;
	cin >> X;
	int64_t Xs = X.size();
	vector<int> Xss(Xs+1);

	for (int i = 0; i < Xs; i++) {
		Xss.at(i + 1) = Xss.at(i) + (int)(X.at(i) - '0');
	}

	string ans;
	int num = 0;
	for (int i = 0; i < Xs; i++) {
		num += Xss.at(Xs - i);
		ans += to_string(num % 10);
		num /= 10;
	}
	while (num > 0) {
		ans += to_string(num % 10);
		num /= 10;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
	return 0;
}