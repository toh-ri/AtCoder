#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B,C=0,i;
    vector<int> Cbit(9);
    cin >> A >> B;
    for (i=0;i<8;i++){
    if ((A%int(std::pow(2,(8-i))))/int(std::pow(2,(7-i)))==(B%int(std::pow(2,(8-i))))/int(std::pow(2,(7-i)))) {
      Cbit.at(7-i)=0;
    }else{
      Cbit.at(7-i)=1;
    }
    }
    for (i=0;i<8;i++){
      C+=Cbit.at(i)*int(std::pow(2,i));
    }
	cout << C << endl;
	return 0;
}