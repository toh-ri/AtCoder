#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N,i,j=0;
	cin >> N;
	vector<int64_t> ans(1000000);

//	ans.at(0) = 1;

	for (int64_t i = 1; i <= int64_t(sqrt(N)); i++) {
		if (N % i == 0) {
			cout << i << endl;
			j++;

			ans[j] = i;

		}
	}

	for (i = j; i > 0; i--) {
//		cout << j << endl;
		if((N / ans.at(i))!=ans.at(i))
		cout<< N/ans.at(i)<< endl;
	}
	return 0;
}