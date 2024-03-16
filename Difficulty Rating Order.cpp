#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"no\n";return;
        }
    }
    cout<<"yes\n";
}

int main() {
    int T;
    cin>>T;
    while(T-- && T>=0){
        solve();
    }
	// your code goes here
	return 0;
}
