#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A;
	cin >> N >> A;
	string op;
	int B = 0;
	int ans=A;
	for (int i = 0; i < N; i++) {
		cin >> op >> B;
		if (op == "+") {
			ans += B;
		}else if (op == "-") {
			ans -= B;
		}
		else if (op == "*") {
			ans *= B;
		}
		else if (op == "/"&& B!=0) {
			ans /= B;
		}
		else {
			cout << "error" << endl;
			return 0;
		}
		cout << i + 1 << ":" << ans << endl;
	}

	



	return 0;
}
