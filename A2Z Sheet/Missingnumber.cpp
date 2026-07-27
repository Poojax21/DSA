#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int s = (n * (n + 1)) / 2;
        int s2 = 0;

        for (int i = 0; i < n; i++) {
            s2 += nums[i];
        }

        return s - s2;
    }

    int XORsoln(vector<int>& nums) {
        int n = nums.size();
        int XOR1 = 0, XOR2 = 0;

        for (int i = 0; i < n; i++) {
            XOR1 ^= nums[i];
        }

        for (int i = 0; i <= n; i++) {
            XOR2 ^= i;
        }

        return XOR1 ^ XOR2;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.missingNumber(nums) << endl;
    cout << obj.XORsoln(nums) << endl;

    return 0;
}