#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> num1 = { 1,2,3,2,5,1,7,2,3,1,11,1,13,1,1,2,17,1,19,1,1,1,23,1,5,1,3,1,29,1 };
	int i = 0;
	int64_t ans=1;
	while (i<30&&i+1 <= N) {
		ans *= num1.at(i);
		i++;
	}
	ans++;
	cout << ans << endl;
	return(0);

}