#include <bits/stdc++.h>
using namespace std;

int main() {

	int N,Y,Y1,i,j;
	cin >> N>>Y;

  for (i=0;i<=N;i++){
   for (j=0;j<=N-i;j++){
     Y1=(i*10000+j*5000+(N-i-j)*1000);
//     cout <<Y1<<endl;
     if(Y==Y1) {
       cout <<i<<" "<<j<<" "<<N-i-j<< endl; exit(0);
     }
   }
  }
	cout <<-1<<" "<<-1<<" "<<-1<< endl; 	
	return 0;
}