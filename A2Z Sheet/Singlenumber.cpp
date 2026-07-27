#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Single {
public:
    int Singlenum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 1; i += 2) {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }

        return nums[n - 1];
    }

    int XORnum(vector<int>& nums){
        int n = nums.size();
        int ans = 0 ;

        for(int i = 0 ; i<n ; i++){
            ans = ans ^ nums[i];


        }

        return ans;
    }
};

int main() {
    Single obj;
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << obj.Singlenum(nums);
    cout<<endl;
    cout << obj.XORnum(nums);

    return 0;
}