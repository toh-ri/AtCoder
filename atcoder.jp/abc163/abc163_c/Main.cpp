#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 1; i < N; i++) {
		int a;
		cin >> a;
		a--;
		A.at(a)++;
	}
	for (int i = 0; i < N; i++) cout << A.at(i) << endl;
	return 0;
}