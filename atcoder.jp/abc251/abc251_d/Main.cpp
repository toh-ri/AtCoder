#include <bits/stdc++.h>
using namespace std;

int main() {
	int W;
	cin >> W;
	vector<int64_t> ans(300,1);

	for (int i = 1; i < 100; i++) ans.at(i - 1) = i;
	for (int i = 101; i < 200; i++) ans.at(i - 1) = ans.at(i - 100) * 100;
	for (int i = 201; i < 300; i++) ans.at(i - 1) = ans.at(i - 200) * 10000;
	ans.at(299) = 1000000;

	cout << "300" << endl;
	for (int i = 0; i < 300; i++) {
		cout << ans.at(i);
		if (i == 200) cout << endl;
		else cout << " ";
	}

	return 0;
}