#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N-1), b(N-1);
	for (int i = 0; i < N-1; i++) cin >> a.at(i) >> b.at(i);
	vector<int> count(N);

	for (int i = 0; i < N-1; i++) {
		count.at(a.at(i) - 1)++;
		count.at(b.at(i) - 1)++;
	}
	bool flag = true;
	for (int i = 0; i < N; i++) {
		if (count.at(i) != 1 && count.at(i) != N - 1) flag = false;
	}
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return(0);
}
