#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N ;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	int mina = 1001, maxa = 0;
	for (int i = 0; i < N; i++) {
		mina = min(mina, A.at(i));
		maxa = max(maxa, A.at(i));

	}
	cout << maxa - mina << endl;
	return(0);

}
