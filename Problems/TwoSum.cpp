#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSumBrute(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }

    vector<int> twoSumHash(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (mp.find(comp) != mp.end()) {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution s;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans1 = s.twoSumBrute(nums, target);
    vector<int> ans2 = s.twoSumHash(nums, target);

    cout << ans1[0] << " " << ans1[1] << endl;
    cout << ans2[0] << " " << ans2[1] << endl;

    return 0;
}
