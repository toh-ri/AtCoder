#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	int n4 = 0, n2=0,ne = 0;
	for (int i = 0; i < N; i++) {
		cin>>a.at(i);
		if (a.at(i) % 4 == 0) {
			n4++;
		}
		else {
			if (a.at(i) % 2 == 0) n2++;
			if (a.at(i) % 2 != 0) ne++;
		}
	}
	
	if (n4 >= ne||(n2==0&&n4+1==ne)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}