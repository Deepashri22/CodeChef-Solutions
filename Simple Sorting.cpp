#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	    int a[t];
	    for(int i=0;i<t;i++)
	        cin>>a[i];
	        sort(a,a+t);
	        for(int i=0;i<t;i++)
	        cout<<a[i]<<endl;
	return 0;
}
