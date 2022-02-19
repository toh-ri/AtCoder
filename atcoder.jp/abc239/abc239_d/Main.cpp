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

};
int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	Eratosthenes E(B + D);
	vector<bool> isprime = E.primelist();
	for (int i = A; i <= B; i++) {
		bool flag = false;
		for (int j = C; j <= D; j++) {
			if (isprime[i + j]) flag = true;
		}
		if (!flag) {
			cout << "Takahashi" << endl;
			return 0;
		}
	}
	cout << "Aoki" << endl;

	return 0;
}