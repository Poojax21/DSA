#include<iostream>
using namespace std;

int main()
{
    int nums[] = {10 , 30 , 30 , 50 , 30 , 30 };
    int n = 6;

    for(int i = 0 ; i < n ; i++){
        int cnt = 0;

        for(int j = 0 ; j < n; j++){
            if(nums[i] == nums[j]){
                cnt++;
            }
        }

        if(cnt > n/2){
            cout << nums[i];
            return 0;  // exit completely after finding
        }
    }

    cout << "No majority element";
    return 0;
}