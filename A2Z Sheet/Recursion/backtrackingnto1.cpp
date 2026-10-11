#include<iostream>
using namespace std;

void fun(int i , int n){
    if(i > n){
        return;
    }

    fun(i + 1 , n);
    cout<<i;
}

int main(){
    int n = 5;
    fun(1 , n);
}