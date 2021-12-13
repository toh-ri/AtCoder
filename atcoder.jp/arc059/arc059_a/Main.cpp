#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a.at(i);

	int INF = (int)1 << 30;
	int costmin = INF;

	for (int i = -100; i <= 100; i++) {
		int cost = 0;
		for (int j = 0; j < N; j++) {
			cost += (a.at(j) - i) * (a.at(j) - i);
		}
		costmin = min(cost, costmin);
	}
		cout << costmin << endl;
		return 0;
	}

