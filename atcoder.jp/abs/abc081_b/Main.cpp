#include<iostream>
using namespace std;
int main()
{
    int i,N,amari=0,count=-1;
  int A[201];
  cin >>N;
  for (i=0;i<N;i++) cin >> A[i];
   while(amari==0){
   for(i=0;i<N;i++){
    amari=amari+A[i]%2;
     A[i]=A[i]/2;
  }
     count++;
   }
     cout << count<<endl;
    return 0;
}
