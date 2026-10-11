#include<iostream>
#include<vector>
using namespace std;

class printname{
    int cnt = 0;
    public:
    void name(string s , int n){
        if(cnt < n){
            return;
        }
        cout<<s;
        cnt++;
        name(s , n);
        
    }



};

int main(){
    printname p;
    int  n;
    string s;

    cin>>n;
    cin>>s;

    p.name(s , n);
}