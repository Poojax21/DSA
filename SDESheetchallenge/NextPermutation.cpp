#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n - 2;
        
        while(k >= 0 && nums[k] >= nums[k+1]) {
            k--;
        }
        
        if(k >= 0) {
            int l = n - 1;
            while(nums[l] <= nums[k]) {
                l--;
            }
            swap(nums[k], nums[l]);
        }
        
        reverse(nums, k+1, n-1);
    }
    
private:
    void reverse(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    s.nextPermutation(nums);
    
    cout << "Next permutation: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}