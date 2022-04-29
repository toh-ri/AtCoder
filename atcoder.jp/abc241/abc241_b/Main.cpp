#include <bits/stdc++.h>
using namespace std;


int main() {
	int N,M;
	cin >> N>>M;
	map<int, int> A;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (!A.count(a)) {
			A[a] = 1;
		}
		else {
			A[a] += 1;
		}
	}
	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		if (A.count(b) && A.at(b) > 0) {
			A[b]-=1;
		}
		else {
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}
