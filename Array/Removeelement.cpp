#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0;

        while(i < n){
            if(nums[i] == val){
                nums[i] = nums[n-1];   
                n--;
            } else {
                i++;
            }
        }

        return n;   
    }
};

int main(){
    Solution s ; 
    vector<int> nums = {10 ,20, 20 , 30, 40,50};
    int val = 20;
    int k = s.removeElement(nums , val);
    cout<<"Remaining element: " << k <<endl;
    cout<<"after removal ";
    
    for (int i = 0; i < k; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}