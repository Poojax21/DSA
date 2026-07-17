#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void leftrotate(vector<int> &arr, int n) {
        int temp = arr[0];

        for(int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }

        arr[n-1] = temp;
    }
};

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    Solution s;
    s.leftrotate(arr, n);

    cout << "\nAfter Left Shift: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}