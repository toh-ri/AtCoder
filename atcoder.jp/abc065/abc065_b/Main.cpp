#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N ;
	vector<int> a(N), T(N);
	for (int i = 0; i < N; i++) {
		cin >> a.at(i);
	}
	int ai=1,k=0;
	
	for (int j = 0; j < N; j++) {
		k++;
		ai = a.at(ai-1);
		if (ai == 2) {
			cout << k << endl;
			return(0);
		}
		
	}
	cout << -1 << endl;
	
	return(0);

}