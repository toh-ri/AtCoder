#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	priority_queue<int,vector<int>,greater<int>> P;
	for (int i = 0; i < K; i++) {
		int p;
		cin >> p;
		P.push(p);
		if (i == K - 1) cout << P.top() << endl;
	}

	for (int i = K; i < N; i++) {
		int p;
		cin >> p;
		if (p > P.top()) {
			P.pop();
			P.push(p);
			cout << P.top() << endl;
		}
		else {
			cout << P.top() << endl;
		}
	}
	return 0;
}