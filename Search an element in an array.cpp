#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key){

    for(int i=0;i<size;i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main() {
	// your code goes here
	int size,key;
	cin>>size>>key;
	int arr[size];
	
	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}
	
	bool found = search(arr,size,key);
	if(found){
	    cout<<"yes";
	}
	else{
	    cout<<"no";
	}
	
return 0;

}
