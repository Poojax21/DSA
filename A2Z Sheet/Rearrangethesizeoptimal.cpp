#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,-3,-1,4,-2};
    int n = arr.size();
    int pos = 0;
    int neg = 1;
     vector<int> ans(n ,0);

    for(int i = 0 ; i<n ; i++){
        if(arr[i] >= 0){
            ans[pos] = arr[i];
            pos = pos+2;
        }
        else{
            ans[neg] = arr[i];
            neg+=2;

        }

    }

    for(int i = 0 ; i<n ; i++){
        cout<<ans[i] <<" ";
    }


}