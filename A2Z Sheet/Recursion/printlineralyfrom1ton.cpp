#include<iostream>
#include<vector>
using namespace std;

class printn{
    int cnt = 1;
    public:
    void printtilln(int n){
        if(cnt == n){
            return;
           
        }
         cout<<cnt;
            cnt++;
            printtilln(n);
    }
};

int main(){
    printn p;
    p.printtilln(90);
}