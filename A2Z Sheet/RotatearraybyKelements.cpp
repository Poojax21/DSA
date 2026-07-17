// Instead of simulating each rotation one by one, we can get the rotated array in-place by reversing specific parts of the array. This works because rotating is just rearranging sections of the array.
// For Right Rotation by k steps:
// Reverse the entire array
// Reverse the first k elements
// Reverse the remaining n - k elements

// For Left Rotation by k steps:
// Reverse the first k elements
// Reverse the remaining n - k elements
// Reverse the entire array

// Normalize k by doing k = k % N

// If direction is "right":
// Reverse the entire array
// Reverse the first k elements
// Reverse the rest (from k to end)

// If direction is "left":
// Reverse the first k elements
// Reverse the rest (from k to end)
// Reverse the entire array


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    // Reverse elements from start to end
    void reverseArray(vector<int> &arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    
    void rightRotate(vector<int> &arr, int k) {
        int n = arr.size();

        k = k % n;

        
        reverseArray(arr, 0, n - 1);

       
        reverseArray(arr, 0, k - 1);

        
        reverseArray(arr, k, n - 1);
    }

   
    void leftRotate(vector<int> &arr, int k) {
        int n = arr.size();

        k = k % n;

        
        reverseArray(arr, 0, k - 1);

       
        reverseArray(arr, k, n - 1);

        
        reverseArray(arr, 0, n - 1);
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int choice;
    cout << "1. Left Rotate\n2. Right Rotate\nEnter your choice: ";
    cin >> choice;

    Solution s;

    if (choice == 1) {
        s.leftRotate(arr, k);
    } else if (choice == 2) {
        s.rightRotate(arr, k);
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}