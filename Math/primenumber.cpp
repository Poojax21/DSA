#include<iostream>
using namespace std;

int main(){
    int n , flag = 0 ;

    cout<<"Enter integer ";
    cin>>n;

    if(n <=0 ){
        cout<<"Invalid Input";
    }
    else if(n == 0 ||  n == 1){
        cout<<"not a prime number ";
    }
    else if(n == 2){
        cout<<"even prime number ";

    }
    else {

        for(int i = 2 ; i<= n/2 ; i++){
            if(n%i == 0 ){
                flag = 1;
                break;
            }
        }

        if(flag == 0 ){
            cout<<"Prime number";
        }
        else{
            cout<<"not a prime number ";
        }
    }

}