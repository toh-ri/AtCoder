#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N); 
	for (int i = 0; i < N; i++) cin >> a.at(i);

	vector<int> ans(100003);

	for (int i = 0; i < N; i++) {
		if (a.at(i) - 1 >= 0) ans.at(a.at(i) - 1)++;
		ans.at(a.at(i))++;
		ans.at(a.at(i) + 1)++;
	}
	int maxans = 0;
	int maxi = 0;
		for (int i = 0; i < 100003; i++) {
			if (ans.at(i) > maxans) {
				maxans = ans.at(i);
				maxi = i;
			}
			
		}
		cout << maxans << endl;
		return 0;
}