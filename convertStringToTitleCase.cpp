#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        int j = 0, acr = 1;
        for(int i = 0; i < s.length(); ++i) {
            s[j] = toupper(s[j]);
            if(s[i] != ' ' && s[i] == tolower(s[i]))acr=0;
            if(s[i] == ' ' || i == s.length()-1) {
                if(!acr) {
                    for(int k = j+1; k<i; ++k){
                    s[k] = tolower(s[k]);
                    }   
                }
                acr = 1;
                j = i+1;
            }
        }
        cout << s << "\n";
    }

}
