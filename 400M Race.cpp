#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      int a,b,c;
	      cin>>a>>b>>c;
	      if (a<b && a<c)cout<<"ALICE"<<endl;
	      if (b<a && b<c)cout<<"BOB"<<endl;
	      if (c<a && c<b) cout<<"CHARLIE"<<endl;
	}
	
	return 0;
}
