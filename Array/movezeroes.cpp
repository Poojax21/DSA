#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // brute force
        // int k =0 ; 
        // int n = nums.size();
        // for(int i = 0 ; i<n ; i++){
        //     if(nums[i] != 0){
        //           nums[k] = nums[i];
        //           k++;
        //         }
            
        // }
        // for(int i  =k ; i<n ; i++){
        //     nums[i]=0;
        // }


        //optimal 
        int j = 0;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;

    
    vector<int> nums = {0, 1, 0, 3, 12};

    // Print original array
    cout << "Original array: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    // Call moveZeroes function
    sol.moveZeroes(nums);

    // Print array after moving zeroes
    cout << "After moving zeroes: ";
    for(int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}