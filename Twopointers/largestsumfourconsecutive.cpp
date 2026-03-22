#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    int maxsum = 0;
    int k = 4;

    
    for(int i = 0; i <= n - k; i++){
        int sum = 0;

        for(int j = i; j < i + k; j++){
            sum += arr[j];
        }

        if(sum > maxsum){
            maxsum = sum;
        }
    }

    cout <<maxsum;

    return 0;
}