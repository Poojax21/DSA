#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MaximumOnes {
public:
    int MaxOnes(vector<int> nums) {
        int n = nums.size();
        int cnt = 0;
        int maxcnt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cnt++;
            } else {
                maxcnt = max(cnt, maxcnt);
                cnt = 0;
            }
        }

        return max(maxcnt, cnt);
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1};

    MaximumOnes obj;
    cout << "Maximum consecutive 1s = " << obj.MaxOnes(nums) << endl;

    return 0;
}