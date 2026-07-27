#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {2 , 2  ,6 , 6, 8, 3, 2,1, 9};
    int n = arr.size();
    int sum = 0;
    int k = 10;
    int len = 0;
    
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ;j<n ; j++){
             sum += arr[j];

            if(k == sum){
                len = max(len , j - i +1);
            }
            

        }

    }
    cout<<len;
    return 0;
}
