#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {-10 , 10 ,-40 , 20 , -20  ,-1 , -20 , 90 , -2};
    int n = arr.size();
    int maxsum = INT_MIN;
    int sum = 0 ;
    

    for(int i = 0 ; i<n ; i++){

        sum+=arr[i];
        
   
    if(sum > maxsum){
        maxsum = sum;
    }

    if(sum < 0 ){
        
        sum = 0;
    }
}
cout<<maxsum;

    
}