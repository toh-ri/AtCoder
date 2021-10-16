#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	vector<int>v(N);
	vector<bool>flag(N);

	flag.at(0) = true;
	for (int i = 1; i < N; i++) {
		if (A.at(i) > A.at(i-1)) {
			flag.at(i) = true;
		}
		else if(A.at(i) == A.at(i-1)){
			flag.at(i) =flag.at(i-1);
		}
		else {
			flag.at(i) =false;
		}
	}
	for (int i = 0; i < N-1; i++) {
		if (flag.at(i) ^ flag.at(i + 1)) {
			v.at(i) = 1;
		}
		else {
			v.at(i) = 0;
		}
	}
	if (flag.at(N-1)) {
		v.at(N - 1) = 0;
	}
	else {
		v.at(N - 1) = 1;
	}
	
	for(int i=0;i<N;i++) cout << v.at(i) << " ";
	return 0;
}