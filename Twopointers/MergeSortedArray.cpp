#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int last = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[last] = nums1[i];
                i--;
            } else {
                nums1[last] = nums2[j];
                j--;
            }
            last--;
        }

        while (j >= 0) {
            nums1[last] = nums2[j];
            j--;
            last--;
        }
    }
};


   
 int main() {

    Solution s;

    vector<int> nums1 = {10, 20, 30, 0, 0, 0};
    vector<int> nums2 = {20, 40, 50};

    int m = 3;  
    int n = nums2.size();

    s.merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
}

// 📌 Merge Sorted Array (In-place)
// 🧠 Idea

// Merge from the back to avoid overwriting elements in nums1.

// ⚙️ Setup
// i = m - 1 → last valid element in nums1
// j = n - 1 → last element in nums2
// k = m + n - 1 → last index of nums1

// 🔁 Algorithm
// While both arrays have elements:
// Compare nums1[i] and nums2[j]
// Place larger at nums1[k]
// Move pointer (i-- or j--)
// Decrement k--
// If elements remain in nums2:
// Copy them into nums1

// ❗ Important Points
// Do NOT copy remaining nums1 elements
// 👉 already in correct position
// Always fill from end → start
// m = number of valid elements (ignore extra 0s)

// ⏱️ Complexity
// Time: O(m + n)
// Space: O(1) (in-place)
// 💡 Trick to Remember

// “3 pointers from back — fill largest first”
