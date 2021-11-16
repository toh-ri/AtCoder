#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, x;
	cin >> N >> x;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a.at(i);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < N; i++) {
		x -= a.at(i);
		if (x == 0) {
			cout << i+1 << endl;
			return 0;
		}else if(x < 0) {
			cout << i<< endl;
			return 0;
		}
	}
	cout << N-1 << endl;
	return(0);

}
