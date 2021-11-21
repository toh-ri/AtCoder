#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, L, R;
	int INF = 1000100000;
	int Lmax = 0, Rmin = INF;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> L >> R;
		Lmax = max(Lmax, L);
		Rmin = min(Rmin, R);
		if (Rmin>=Lmax) {
			cout << 0 << endl;
		}
		else {
			cout << abs(Rmin - Lmax) / 2 + abs(Rmin - Lmax) % 2 << endl;
		}
	}
	
	return(0);

}
