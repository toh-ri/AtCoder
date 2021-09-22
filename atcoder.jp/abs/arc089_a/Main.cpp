#include <bits/stdc++.h>
using namespace std;

int main() {

	int N,t[100001],x[100001],y[100001],i,time,x_dist,y_dist;
	cin >> N;
    t[0]=0;
    x[0]=0;
    y[0]=0;
    for (i=0;i<N;i++) cin>>t[i+1]>>x[i+1]>>y[i+1];

  for (i=0;i<N;i++){
   time=t[i+1]-t[i];
   x_dist=abs(x[i+1]-x[i]);
   y_dist=abs(y[i+1]-y[i]);
   if(time%2!=(x_dist+y_dist)%2 || time< (x_dist+y_dist) ){
     cout<<"No"<<endl;exit(0);
   }
  }
	cout <<"Yes"<< endl; 	
	return 0;
}