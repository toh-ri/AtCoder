#include <bits/stdc++.h>
using namespace std;

int main() {
  int H,W,i,j;
  cin >>H>>W;
  vector<vector<int>> A(H,vector<int>(W,0));
  vector<vector<int>> B(H,vector<int>(W,0));
  vector<int> Hsum(W);
  vector<int> Wsum(H);
                        
  for(i=0;i<H;i++){
  	for(j=0;j<W;j++){
      cin>>A.at(i).at(j);
      Hsum.at(j)+=A.at(i).at(j);
      Wsum.at(i)+=A.at(i).at(j);
  	}
  }
  for(i=0;i<H;i++){
  	for(j=0;j<W;j++){
      B.at(i).at(j)=Hsum.at(j)+Wsum.at(i)-A.at(i).at(j);
  	}
  }
  for(i=0;i<H;i++){
  	for(j=0;j<W;j++){
      cout<<B.at(i).at(j)<<" ";
  	}
	cout << endl;
  }
	return 0;
}