#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> arr = {2 , 4, 5 , 2 , 2 , 4 , 2 , 4, 4, 3, 4, 4, 4, 4 , 4, 4, 4, 4};
   int n = arr.size();

   for(int i = 0 ; i<n ; i++){
    int cnt = 0;
    for(int j = i ; j<n ; j++){
        if(arr[i] == arr[j]){
            cnt++;
        }

    }
    if(cnt > n/2){
       cout<<arr[i];
       break;
    }
   }
   return 0;
}