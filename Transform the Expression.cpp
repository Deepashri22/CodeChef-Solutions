#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        string expression;
        cin >> expression;
        string result;
        stack < char > my_stack;
        for (int i = 0; i < expression.length(); i++)
        {
            if (expression[i] >= 'a' && expression[i] <= 'z') {
                result += expression[i];
            }
            else if (expression[i] == '(') {              
                my_stack.push(expression[i]); 
            } 
            else if (expression[i] == ')') 
            { 
                while (my_stack.top() != '(') 
                { 
                    result += my_stack.top(); 
                    my_stack.pop(); 
                }
                my_stack.pop();
            }
            else
                my_stack.push(expression[i]);
        }
        cout << result << endl;
    }

    return 0;
}
