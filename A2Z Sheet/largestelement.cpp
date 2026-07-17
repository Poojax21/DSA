#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int>& arr){
    int maxi = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    return maxi;
}

int main(){
    vector<int> arr = {10,20,30,90,34,23};

    cout << largest(arr);
}