#include <iostream>
#include <vector>
using namespace std;

class Twosum {
public:
    vector<int> twosum(vector<int> nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {   // j starts from i+1
                if (nums[i] + nums[j] == target) {
                    return {i, j};             // return both indices
                }
            }
        }
        return {}; // if no pair found
    }
};

int main() {
    vector<int> nums = {10, 20, 30, 60, 40, 50};
    int target = 30;

    Twosum obj;
    vector<int> result = obj.twosum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
