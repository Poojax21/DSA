#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> arr = {-10, 10, -40, 20, -20, -1, -20, 90, -2};

    int n = arr.size();

    int maxSum = INT_MIN;
    int sum = 0;

    int start = 0;
    int end = 0;
    int tempStart = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxSum) {
            maxSum = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum = " << maxSum << endl;

    cout << "Subarray: ";

    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}