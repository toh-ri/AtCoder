#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a.at(i);
	int ans=1;
	for (int i = 0; i < N; i++) {
		if (a.at(i) % 2 == 0) ans *= 2;
	}
	cout<<(int)pow(3,N) - ans << endl;
	return(0);

}
