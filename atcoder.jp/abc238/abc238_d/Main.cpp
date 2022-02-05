#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int64_t a, s;
		cin >> a >> s;
		if (2 * a <= s&&((s-2*a)&a)==0) {
			cout << "Yes" << endl;
		}
		else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}
