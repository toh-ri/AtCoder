#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, K;
	cin >> N >> K;
	vector<int64_t> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	vector<int64_t> sum(N+1,0);
	vector<int64_t> Ac(N,-1);
	Ac.at(0) = 0;
	int64_t a0 = 0, c = 0,sumc=0;
	for (int i = 1; i <= N; i++) {
		sum.at(i) = sum.at(i - 1) + A.at(sum.at(i - 1) % N);
		if (Ac.at(sum.at(i) % N) != -1) {
			a0 = Ac.at(sum.at(i) % N);
			c = i - a0;
			sumc = sum.at(i) - sum.at(a0);
			break;
		}
		else {
			Ac.at(sum.at(i) % N) = i;
		}
	}
	
	if (K <= a0+c) {
		cout << sum.at(K)<<endl;
	}
	else {
		cout << sumc * ((K - a0) / c) + sum.at(K - c * ((K - a0) / c))<< endl;
	}

	return 0;
}
