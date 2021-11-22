#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> h(N);
	for (int i = 0; i < N; i++) cin>>h.at(i);
	int INF = 2000000000;
	
	vector<int> dp(N, INF);
	for (int i = 0; i < N; i++) h.at(i);

	dp.at(0) = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= K; j++) {
			if (i - j >= 0) dp.at(i) = min(dp.at(i), dp.at(i - j) + abs(h.at(i) - h.at(i - j)));
		}
	}
		cout << dp.at(N-1)<< endl;
		return(0);

}
