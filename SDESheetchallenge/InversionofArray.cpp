#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int mergeSort(vector<int>& nums, vector<int>& temp, int left, int right) {
        int count = 0;
        if (left >= right) return count;
        int mid = left + (right - left) / 2;
        count += mergeSort(nums, temp, left, mid);
        count += mergeSort(nums, temp, mid + 1, right);
        count += merge(nums, temp, left, mid, right);
        return count;
    }

    int merge(vector<int>& nums, vector<int>& temp, int left, int mid, int right) {
        int i = left, j = mid + 1, k = left;
        int count = 0;
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
                count += (mid - i + 1);
            }
        }
        while (i <= mid) temp[k++] = nums[i++];
        while (j <= right) temp[k++] = nums[j++];
        for (i = left; i <= right; i++) nums[i] = temp[i];
        return count;
    }

    int inversionCount(vector<int>& nums) {
        vector<int> temp(nums.size());
        return mergeSort(nums, temp, 0, nums.size() - 1);
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Number of inversions: " << s.inversionCount(nums) << endl;
    return 0;
}
