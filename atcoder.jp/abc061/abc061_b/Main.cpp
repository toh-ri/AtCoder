#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> a(M), b(M);
	for (int i = 0; i < M; i++) cin >> a.at(i) >> b.at(i);
	vector<int> city(N);

	for (int i = 0; i < M; i++) {

		 city.at(a.at(i)-1)++;
		 city.at(b.at(i)-1)++;
	}

	for(int i = 0; i < N; i++) cout << city.at(i) << endl;

	return 0;
}