#include <iostream>
#include <stack>
using namespace std;

int main() {
    string post;
    cout << "Enter postfix: ";
    cin >> post;

    stack<string> st;

    for(int i=0; i<post.size(); i++) {
        char c = post[i];

        if(isalnum(c)) {
            st.push(string(1, c));
        }
        else {
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();

            string temp = "(" + a + c + b + ")";
            st.push(temp);
        }
    }

    cout << "Infix: " << st.top();
}
