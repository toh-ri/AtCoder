#include <bits/stdc++.h>
using namespace std;

int main() {
	string S, T;
	int  i, size = 0, ans = 0;
	vector<string> S1(100);
	vector<string> T1(100);
  vector<int> ii(100);
	cin >>S >> T;
	size = S.size();
//	cout << size << endl;
	for (int i = 0; i < size; i++) {
		if (S.at(i) != T.at(i)) {
			
			S1.at(ans) = S.at(i);
			T1.at(ans) = T. at(i);
          ii.at(ans)=i;
			ans++;
		}

	}
	if (ans == 0 ||(ans == 2&& S1.at(0)== T1.at(1)&& S1.at(1)== T1.at(0)&&ii.at(0)+1==ii.at(1)) ){
		cout << "Yes" << endl;
	}else{ 
		cout << "No" << endl;
	}
	
	return 0;
}