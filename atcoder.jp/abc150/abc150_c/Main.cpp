#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>P(N), Q(N);
	for (int i = 0; i < N; i++) cin >> P.at(i);
	for (int i = 0; i < N; i++) cin >> Q.at(i);

	vector<int> R(N);
	for (int i = 0; i < N; i++) R.at(i) = i+1;
	int a=0, b=0,i=1;

	do {
		if (R == P) a = i;
		if (R == Q)b = i;
//		for (int j = 0; j < N; j++) cout << R.at(j) << " ";
//		cout << endl;
			i++;
	} while (next_permutation(R.begin(), R.end()));
//	cout << a << b << endl;

	cout << abs(a - b) << endl;
	return 0;

}