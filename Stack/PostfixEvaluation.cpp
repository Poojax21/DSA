#include <iostream>
#include <stack>
using namespace std;

int main() {
    string post;
    cout << "Enter postfix: ";
    cin >> post;

    stack<int> st;

    for(int i=0; i<post.size(); i++) {
        char c = post[i];

        if(isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            int ans;
            if(c=='+') ans = a+b;
            else if(c=='-') ans = a-b;
            else if(c=='*') ans = a*b;
            else ans = a/b;

            st.push(ans);
        }
    }

    cout << "Result: " << st.top();
}
