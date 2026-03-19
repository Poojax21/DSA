#include<iostream>
using namespace std;

int main(){
    int num[] = {10, 3, 4, 6, 3, 65};
    int n = sizeof(num) / sizeof(num[0]);
    int k = 2;

    k = k % n;

    int temp[k];

   
    for(int i = 0; i < k; i++){
        temp[i] = num[i];
    }

    
    for(int i = k; i < n; i++){
        num[i - k] = num[i];
    }

   
    int j = 0;
    for(int i = n - k; i < n; i++){
        num[i] = temp[j];
        j++;
    }

 
    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }

    return 0;
}