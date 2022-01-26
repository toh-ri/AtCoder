#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int> a(9);
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x < 3600) {
			a[x / 400]++;
		}
		else {
			a[8]++;
		}
	}
	int cnum = 0;
	for (int i = 0; i < 8; i++) {
		if (a[i]>0)cnum++;
	}
	
	cout << max(1,cnum) << " " << cnum + a[8] << endl;


		return 0;
}