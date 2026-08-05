#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 50, 30, 20, 40};
    int k = 50;

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == k) {
            cout <<  arr[left] << " " << arr[right] << endl;
            return 0;
        }
        else if (sum < k) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << "No pair found";
    return 0;
}