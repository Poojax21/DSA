// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.




#include <iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;

    while (i < j) {
        int sum = numbers[i] + numbers[j];

        if (sum == target) {
            return {i + 1, j + 1}; // 1-based indexing
        }
        else if (sum > target) {
            j--; // decrease sum
        }
        else {
            i++; // increase sum
        }
    }

    return {}; // safety
}

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(numbers, target);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

// Short Notes (for notebook)
// 🔹 Approach: Two Pointer
// Array is sorted
// Use two pointers:
// i = 0 (start)
// j = n-1 (end)

// 🔹 Logic
// If sum == target → return answer
// If sum > target → move j--
// If sum < target → move i++

// 🔹 Why it works

// Sorted array allows us to adjust sum by moving pointers intelligently.

// 🔹 Important Point ⚠️

// Return i+1, j+1 because question uses 1-based indexing

// 🔹 Complexity
// Time: O(n)
// Space: O(1)
// ⚡ One-line Revision

// "Use two pointers on sorted array; move left to increase sum, right to decrease sum."