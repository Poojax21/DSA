#include<iostream>
using namespace std;

int rightangle(){
    int n = 5;

    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// *
// **
// ***
// ****
// *****

int upsidedownrightangle(){
    int n = 5;

    for(int i = 0 ; i<=n ; i++){
        for(int j = n ; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int reverserightangle(){
    int n = 6;
 for(int i = n ; i>0 ; i--){
    for(int j = n ; j>n-i ; j--){
        cout<<"*";
    }
    cout<<endl;

    for(int j = 0 ; j<2*i ; j++){
        cout<<" ";
    }
    for(int k = n ; k > n-i ;k--){
        cout<<"*";
    }

   
 }
 return 0;

}



int main(){
    reverserightangle();
    return 0;
}