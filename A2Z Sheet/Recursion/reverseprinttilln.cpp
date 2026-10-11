#include<iostream>
#include<vector>
using namespace std;

class printn{
    
    public:
    void printtilln(int n){
        if(n == 0){
            return;
           
        }
         cout<<n;
            
            printtilln(n  - 1 );
    }
};

int main(){
    printn p;
    p.printtilln(90);
}