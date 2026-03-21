#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int hasharr[100] = {0}; // increase size

    for(int i = 0; i < n; i++){
        hasharr[arr[i]]++;
    }

    int q;
    cin >> q;

    while(q--){
        int num;
        cin >> num;
        cout << hasharr[num] << endl;
    }
}
