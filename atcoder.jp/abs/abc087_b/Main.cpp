#include<iostream>
using namespace std;
int main()
{
    int A,B,C,X,i,j,k,count=0;
  cin >>A>>B>>C>>X;
  for (i=0;i<=A;i++) {
    for(j=0;j<=B;j++){
    for(k=0;k<=C;k++){
    if(X-500*i-100*j-50*k==0)count++;
    }
    }
  }
  cout << count << endl;
    return 0;
}
