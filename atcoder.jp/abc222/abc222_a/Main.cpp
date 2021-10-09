#include <bits/stdc++.h>
using namespace std;

int main() {
	string N, ans;
	
	cin >> N;

	if (stoi(N) / 1000 > 0) {
		ans = N;
	}
	else if (stoi(N) / 100 > 0) {
		ans = "0" + N;
	}
	else if (stoi(N) / 10 > 0) {
		ans = "00" + N;
	}
	else if (stoi(N) / 1 > 0) {
		ans = "000" + N;
	}
	else {
		ans = "0000";
	}
	
	 cout << ans << endl;

	
		return 0;
}
