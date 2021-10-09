#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, P,ans=0;
	cin >> N >> P;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	for (int i = 0; i < N; i++) {
		if (A.at(i) < P) {
			ans++;
		}
	}
	
	cout << ans << endl;
		return 0;
}
