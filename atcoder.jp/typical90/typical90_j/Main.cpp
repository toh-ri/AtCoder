#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Q,i,sum1=0,sum2=0;
  cin >>N;
  vector<int> C(N);
  vector<int> P(N);
  vector<int> Psum1(N);
  vector<int> Psum2(N);
  for (i=0;i<N;i++) {cin>>C.at(i)>>P.at(i);}
  cin>>Q;
  vector<int> L(Q);
  vector<int> R(Q);
  for (i=0;i<Q;i++) {cin>>L.at(i)>>R.at(i);}
  
  if(C.at(0)==1) {
    Psum1.at(0)=P.at(0);
  }else{
    Psum2.at(0)=P.at(0);
  }
  
  for(i=1;i<N;i++){
    Psum1.at(i)=Psum1.at(i-1);
    Psum2.at(i)=Psum2.at(i-1);
  if (C.at(i)==1){
  Psum1.at(i)+=P.at(i);
  }else{
  Psum2.at(i)+=P.at(i);
  }
  }
  	for(i=0;i<Q;i++){
      sum1=Psum1.at(R.at(i)-1)-Psum1.at(L.at(i)-1)+(P.at(L.at(i)-1)*(C.at(L.at(i)-1)%2));
      sum2=Psum2.at(R.at(i)-1)-Psum2.at(L.at(i)-1)+(P.at(L.at(i)-1)*(C.at(L.at(i)-1)/2));
      cout<<sum1<<" "<<sum2<<endl;
    }
    
    
    
  
	return 0;
}