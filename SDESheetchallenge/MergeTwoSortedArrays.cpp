#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int last = m + n - 1;
        
        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[last] = nums1[i];
                i--;
            } else {
                nums1[last] = nums2[j];
                j--;
            }
            last--;
        }
        
        while(j >= 0) {
            nums1[last] = nums2[j];
            j--;
            last--;
        }
    }
};

int main() {
    Solution s;
    int m, n;
    
    cout << "Enter sizes of nums1 and nums2: ";
    cin >> m >> n;
    
    vector<int> nums1(m + n, 0);
    cout << "Enter nums1 elements: ";
    for(int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    
    vector<int> nums2(n);
    cout << "Enter nums2 elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    s.merge(nums1, m, nums2, n);
    
    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    return 0;
}