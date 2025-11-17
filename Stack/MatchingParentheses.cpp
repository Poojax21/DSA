#include <iostream>
#include <stack>
using namespace std;

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    stack<char> st;
    bool ok = true;   

    for(int i=0; i<exp.size(); i++) {
        char c = exp[i];

        
        if(c=='(' || c=='{' || c=='[') {
            st.push(c);
        }

        
        else if(c==')' || c=='}' || c==']') {

            
            if(st.empty()) {
                ok = false;
                break;
            }

            char top = st.top();
            st.pop();

            if(c==')' && top!='(') ok = false;
            if(c=='}' && top!='{') ok = false;
            if(c==']' && top!='[') ok = false;
        }
    }

    if(!st.empty()) ok = false;

    if(ok) cout << "Parentheses are Balanced";
    else   cout << "Not Balanced";

    return 0;
}
