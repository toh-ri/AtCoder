#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> h(N);
	for (int i = 0; i < N; i++) cin >> h.at(i);

	vector<int>cost(N+1);

	cost.at(1) = abs(h.at(1) - h.at(0));

	for (int i = 2; i < N; i++) {
		cost.at(i) = min(cost.at(i - 2) + abs(h.at(i) - h.at(i - 2)), cost.at(i - 1) + abs(h.at(i) - h.at(i - 1)));
	}

	cout << cost.at(N-1) << endl;
	return 0;
}