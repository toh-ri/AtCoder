#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	string S;
	while (N != 0) {
		if (N % 2 == 1) {
			N--;
			S += "A";
		}
		else {
			N /= 2;
			S += "B";
		}
	}
	reverse(S.begin(), S.end());
	cout << S << endl;
	return 0;
}