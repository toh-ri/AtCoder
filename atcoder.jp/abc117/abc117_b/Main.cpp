#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> L(N);
	for (int i = 0; i < N; i++)cin >> L.at(i);
	int maxL = 0, sum = 0;
	for (int i = 0; i < N; i++) {
		maxL = max(maxL, L.at(i));
		sum += L.at(i);
	}
	
	if (sum - maxL > maxL) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}

