#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    string n;
    cin >> t;
    while (t--) {
        cin >> n;
        
        // Assume we need to add 1 to the last digit initially
        bool carry = true; 
        for (int i = n.length() - 1; i >= 0 && carry; i--) {
            if (n[i] == '9') {
                // If the digit is '9', it becomes '0' and carry remains true
                n[i] = '0';
            } else {
                // Increment the digit and set carry to false as we are done
                n[i] = n[i] + 1; 
                carry = false;
            }
        }
        if (carry) {
            // If carry is still true after the loop, all digits were '9', so we prepend '1' to handle the carry
            n = "1" + n;
        }
        cout << n << endl;
    }

}
