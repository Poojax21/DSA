#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondlargest(vector<int> &arr){

    int n = arr.size();
    int maxi = arr[0];
    int secmax = INT_MIN;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxi) {
            secmax = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > secmax && arr[i] != maxi) {
            secmax = arr[i];
        }
    }

    if (secmax == INT_MIN)
        return -1;

    return secmax;
}

int main(){

    vector<int> arr = {10,20,30,90,34,23};

    cout << secondlargest(arr);

    return 0;
}