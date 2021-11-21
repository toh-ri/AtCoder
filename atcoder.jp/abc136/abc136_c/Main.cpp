#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> H(N);
	for (int i = 0; i < N; i++) cin >> H.at(i);

	bool flag = true;

	for (int i = N-2; i >=0; i--) {
		if (H.at(i) == H.at(i + 1) + 1) {
			H.at(i)--;
		}
		else if (H.at(i) > H.at(i+1) + 1) {
			flag = false;
		}
	}

	
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return(0);

}
