#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if (A < C || (A == C && B <= D)) {
		cout << "Takahashi" << endl;
	}
	else {
		cout << "Aoki" << endl;
	}
	return 0;
}