#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int>& arr, int n){

    for(int i = 0; i < n - 1; i++){

        int min = i;

        for(int j = i + 1; j < n; j++){

            if(arr[j] < arr[min]){
                min = j;
            }
        }

        swap(arr[i], arr[min]);
    }
}

int main(){

    int n;
    vector<int> arr;

    cout << "Enter how many numbers: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    selection(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}