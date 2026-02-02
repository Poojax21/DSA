// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     string exp;
//     cout << "Enter expression: ";
//     cin >> exp;

//     stack<char> st;
//     bool ok = true;   

//     for(int i=0; i<exp.size(); i++) {
//         char c = exp[i];

        
//         if(c=='(' || c=='{' || c=='[') {
//             st.push(c);
//         }

        
//         else if(c==')' || c=='}' || c==']') {

            
//             if(st.empty()) {
//                 ok = false;
//                 break;
//             }

//             char top = st.top();
//             st.pop();

//             if(c==')' && top!='(') ok = false;
//             if(c=='}' && top!='{') ok = false;
//             if(c==']' && top!='[') ok = false;
//         }
//     }

//     if(!st.empty()) ok = false;

//     if(ok) cout << "Parentheses are Balanced";
//     else   cout << "Not Balanced";

//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std; 

class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;

        for(int i = 0 ; i< s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
{
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }

                if( (st.top() == '(' && s[i] == ')') ||
                (st.top() == '[' && s[i] == ']') ||
                (st.top() == '{' && s[i] == '}') )

                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.size() == 0 ;
    }

};

int main(){


    Solution sl ;
    string s;
    cout<<"Enter string";
    cin>> s;

    if(sl.isValid(s)){
        cout<<"string is valid";
    }
    else{
        cout<<"string is invalid";
    }

    return 0 ;
    
    
}