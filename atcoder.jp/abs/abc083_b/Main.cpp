#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,A,B,i,wa;
     int64_t sum=0;
  cin >>N>>A>>B;
  for (i=1;i<=N;i++) {
      wa=i/10000+(i%10000)/1000+(i%1000)/100+(i%100)/10+i%10;
        if(wa>=A && wa<=B) sum+=i;
  }
  cout << sum << endl;
    return 0;
}
