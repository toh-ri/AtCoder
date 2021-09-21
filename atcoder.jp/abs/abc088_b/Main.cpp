#include <bits/stdc++.h>
using namespace std;

int main() {

	int N,A[100],Alice=0,Bob=0,i,j,c;
	cin >> N;
	for(i=0;i<N;i++) cin>>A[i];
  
	for(j=0;j<N;j++){
      for(i=0;i<(N-j-1);i++){
      if(A[i]<A[i+1]){
        c=A[i];
        A[i]=A[i+1];
        A[i+1]=c;
      }
      }
    }
  
  for(i=0;i<N;i++){
//    cout << A[i]<< endl;
  if(i%2==0){
  Alice+=A[i];
  }else{
  Bob+=A[i];
  }
  }
		cout << Alice-Bob<< endl;
	return 0;
}