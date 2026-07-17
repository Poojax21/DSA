#include<iostream>
#include<vector>
using namespace std;

int checkarray(vector<int> &arr){
    int n = arr.size();

    for(int i = 1; i < n; i++){
        if(arr[i-1] < arr[i]){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter number of elements";
    cin >> n;

    vector<int> arr(n);

    cout<<"Enter Elements";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(checkarray(arr)){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}