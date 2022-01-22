#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t H, W, K;
	cin >> H >> W >> K;
	vector<int64_t> A(H), B(W);
	for (int64_t i = 0; i < H; i++) cin >> A.at(i);
	for (int64_t i = 0; i < W; i++) cin >> B.at(i);

	int64_t Anum = ((K - 1) * W) % K, Asum = 0;;
	int64_t Bnum = ((K - 1) * H) % K, Bsum = 0;
	vector<int64_t> Am(H), Bm(W);
	for (int64_t i = 0; i < H; i++) {
		Am.at(i) = (K - 1 + A.at(i) - Anum) % K - (K - 1);
		Asum += Am.at(i);
	}
	for (int64_t i = 0; i < W; i++) {
		Bm.at(i) = (K - 1 + B.at(i) - Bnum) % K - (K - 1);
		Bsum += Bm.at(i);
	}
	if (abs(Asum - Bsum) % K != 0) {
		cout << -1 << endl;
	}
	else {
		cout << (K - 1) * H * W - max(abs(Asum), abs(Bsum)) << endl;
	}
	return 0;
}
