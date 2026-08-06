#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {7 , 1, 3, 4 , 5, 6,2 };
    int n = arr.size();

    int mini = arr[0];
    int maxprofit = 0;

    for(int i=1 ; i<n ; i++){
        int cost = arr[i] - mini;
        maxprofit = max(maxprofit , cost);
        mini = min(mini , arr[i]);

        

    }
    cout<<maxprofit;
    return 0;
}