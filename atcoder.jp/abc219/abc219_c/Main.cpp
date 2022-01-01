#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;
bool cmp(const string &s1,const string &s2) {
	int Ns = min(s1.size(), s2.size());
	for (int i = 0; i < Ns; i++) {
		if (s1.at(i) != s2.at(i)) return mp[s1.at(i)] < mp[s2.at(i)];
	}
	return s1.size() < s2.size();
}

int main() {
	string X;
	cin >> X;
	
	for (int i = 0; i < 26; i++) {
		mp[X.at(i)] = i + 1;
	}
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; i++) {
		cin >> S.at(i);
	}
	sort(S.begin(), S.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << S.at(i) << endl;
	}
	return 0;
}