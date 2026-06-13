#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n-i ; j++){
            cout<<" ";
        }
        

        for(int k = 1 ; k<=1;k++){
            cout<<"*";
        }
        

        for(int l = 0 ; l<3*i-i ; l++){
            cout<<" ";
        }

        for(int m = 1 ; m<=1 ; m++ ){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i = n ; i>0 ; i--){
        for(int j =0 ; j<=n-i ; j++){
            cout<<" ";
        }

        for(int k = 1 ; k<=1 ; k++){
            cout<<"*";
        }

        for(int l =0 ; l<2*i-1 ; l++){
            cout<<" ";
        }

        for(int m = 1 ; m<=1 ; m++ ){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}