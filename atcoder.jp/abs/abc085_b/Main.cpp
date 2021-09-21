#include <bits/stdc++.h>
using namespace std;

int main() {

	int N,d[100],e[100],i,j,c=0;
	cin >> N;
	for(i=0;i<N;i++) cin>>d[i];
    for(i=0;i<100;i++) e[i]=0;
  
  	for(j=1;j<=100;j++){
      for(i=0;i<N;i++){
      if(d[i]==j){
        e[j-1]=1;
      }
      }
    }
  for(i=0;i<100;i++){
  c+=e[i];
  }
		cout << c<< endl;
	return 0;
}