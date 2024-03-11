#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y,total_p=0,total_d=0;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        for(int i=0;i<n;i++){
            total_p+=a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=max(a[i]-y,0);
            total_d=total_d+a[i];
        }
        if(total_d+x<total_p) cout<<"Coupon"<<endl;
        else cout<<"No Coupon"<<endl;
    }

}
