#include <iostream>
#include <stack>
using namespace std;

int prec(char c) {
    if(c=='^') return 3;
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return 0;
}

int main() {
    string infix, post = "";
    stack<char> st;

    cout << "Enter infix: ";
    cin >> infix;

    for(int i=0; i<infix.size(); i++) {
        char c = infix[i];

        if(isalnum(c)) {
            post += c;
        }
        else if(c=='(') {
            st.push(c);
        }
        else if(c==')') {
            while(!st.empty() && st.top()!='(') {
                post += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && prec(st.top()) >= prec(c)) {
                post += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()) {
        post += st.top();
        st.pop();
    }

    cout << "Postfix: " << post;
}
