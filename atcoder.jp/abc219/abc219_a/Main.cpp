#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,point;
    cin >>N;
  if (0<=N && N<40) cout<<40-N<<endl;
  if (40<=N && N<70) cout<<70-N<<endl;
  if (70<=N && N<90) cout<<90-N<<endl;
  if (90<=N ) cout<<"expert"<<endl;
	
	return 0;
}