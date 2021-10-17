#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<double> A(N), B(N);
	vector<double> Asum(N + 1);
	vector<double> AB(N + 1);
	Asum.at(0) = 0;
	AB.at(0) = 0;
	for (int i = 0; i < N; i++) {
		cin >> A.at(i) >> B.at(i);
		Asum.at(i+1) = Asum.at(i)+A.at(i);
		AB.at(i + 1) = AB.at(i) + A.at(i)/B.at(i);
//		cout << Asum.at(i + 1) << "  " << AB.at(i + 1) << endl;
	}

	double diff=100,leftt=100,rightt=100;
	double left = 0, right = Asum.at(N), mid = 0;

	for (; diff > 0.0000001;) {
		mid = (left + right) / 2;
		for (int j = 1;j<=N ; j++) {
//			cout << mid << endl;
			if (Asum.at(j) > mid) {
				leftt = AB.at(j - 1) + (mid - Asum.at(j - 1)) / B.at(j - 1);
				rightt = AB.at(N) - AB.at(j) + (Asum.at(j) - mid) / B.at(j - 1);
//				cout << leftt << " " << rightt  << endl;
				break;
				
			}
			
		}
		diff = abs(leftt - rightt);
		if (leftt<rightt) {
			left = mid;
		}
		else { 
			right = mid;
		}
		
		
//		cout << left<<" "<<right<<" "<<diff << endl;

	}
	cout << fixed << setprecision(10);
	cout << mid<< endl;


		return 0;
}