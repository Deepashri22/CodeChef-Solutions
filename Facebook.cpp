#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
        int index=0;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(arr[i]==a){
                if(brr[i]>b){
                    a=arr[i];
                    index = i+ 1;
                    b=brr[i];
                }
            }
            else if(arr[i]>=a){
                a=arr[i];
                b=brr[i];
                index = i+ 1;
            }
        }
        cout<<index<<endl;
    }
}
