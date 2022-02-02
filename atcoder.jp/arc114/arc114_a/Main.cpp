#include <bits/stdc++.h>
using namespace std;

struct Eratosthenes {
	vector<bool> isprime;

	Eratosthenes(int N) :isprime(N + 1, true) {
		isprime[0] = isprime[1] = false;
		for (int i = 2; i <= N; i++) {
			if (!isprime[i]) continue;
			for (int j = i + i; j <= N; j += i) {
				isprime[j] = false;
			}
		}
	}

	vector<bool> primelist() {
		return isprime;
	}

	int primenum() {
		int num = 0;
		for (auto a : isprime) {
			if (a) num++;
		}
		return num;
	}

	int twinprimenum() {
		int num = 0;
		for (int i = 0; i < isprime.size() - 2; i++) {
			if (isprime[i] && isprime[i + 2]) num++;
		}
		return num;
	}

};

int main() {
	int N;
	cin >> N;
	vector<int> X(N);
	for (int i = 0; i < N; i++) cin >> X[i];

	Eratosthenes E(50);
	vector<bool> isprime = E.primelist();
	int64_t ans = 1000000000000000000;
	vector<int> prm;
	for (int i = 2; i < 51; i++) {
		if (isprime[i]) {
			for (int j = 0; j < N; j++) {
				if (X[j] % i == 0) {
					prm.push_back(i);
					break;
				}
			}
		}
	}
	int Np = prm.size();
	for (int i = 0; i < (1 << Np); i++) {
		bool flag = true;
		int64_t num = 1;
		for (int j = 0; j < Np; j++) {
			if (i & (1 << j)) num *= prm[j];
		}
		for (int j = 0; j < N;j++) {
			if (gcd(X[j], num) == 1) flag = false;
		}
		if (flag) ans = min(ans, num);
	}
	cout << ans << endl;
		return 0;
}