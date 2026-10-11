#include<iostream>
#include<vector>
using namespace std;

class Recursioncnt{
    public:
    int cnt = 0;
    void recursion(){
        
        if(cnt == 4){
            return;
        }

        cout<<cnt;
        cnt++;
        recursion();
    }

};

int main(){
    Recursioncnt r;
    r.recursion();
}