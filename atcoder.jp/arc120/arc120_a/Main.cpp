#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N ;
	vector<int64_t> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	int64_t amax = 0;
	int64_t Asum=0, F = 0;
	for (int i = 0; i < N; i++) {
		Asum += A.at(i);
		amax = max(amax, A.at(i));
		F+= Asum;
		cout << amax *( i+1) + F << endl;
	}
	return(0);

}
