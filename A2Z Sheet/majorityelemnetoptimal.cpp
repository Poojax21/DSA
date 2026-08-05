#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr = {10,20,50,40,50,30,50,50,50};

    int n = arr.size();

    int curr = 0;
    int cnt = 1;

    
    for(int i = 1; i < n; i++) {

        if(arr[i] == arr[curr])
            cnt++;
        else
            cnt--;

        if(cnt == 0) {
            curr = i;
            cnt = 1;
        }
    }

    
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[curr])
            count++;
    }

    if(count > n/2)
        cout << arr[curr];
    else
        cout << "No Majority Element";

    return 0;
}