#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	vector<int> cnt(1500001);
	for (int i = 0; i < M; i++) cnt[A[i]]++;
	int mex;
	for (int i = 0; i < cnt.size(); i++) {
		if (cnt[i] == 0) {
			mex = i;
			break;
		}
	}

	for (int i = 0; i < N - M; i++) {
		cnt[A[i]]--;
		cnt[A[M + i]]++;
		if (cnt[A[i]] == 0 && A[i] < mex) mex = A[i];
	}
	cout << mex  << endl;
	return 0;
}
