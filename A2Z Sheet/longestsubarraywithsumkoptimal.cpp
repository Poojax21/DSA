#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 1, 4, 6, 3, 6, 2, 5, 4};

    int k = 10;
    int n = arr.size();

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
    }

    cout << "Length = " << maxLen << endl;

    return 0;
}