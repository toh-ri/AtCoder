#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(N+1), B(M+1);
	const int INF = (1 << 30);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	for (int i = 0; i < M; i++) cin >> B.at(i);
	A.at(N) = INF; B.at(M) = INF;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	int j = 0;
	int i = 0;
	int ans = INF;
	for (; i < N && j < M;) {
		ans = min(ans, abs(A.at(i) - B.at(j)));
		//cout << ans <<" "<<i<<" "<<j << endl;
		if (A.at(i) > B.at(j)) {
			j++;
		}
		else if (A.at(i) < B.at(j)) {
			i++;
		}
		else {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}