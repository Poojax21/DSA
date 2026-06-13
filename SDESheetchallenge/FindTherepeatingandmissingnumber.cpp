#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeating(vector<int>& arr) {
        long long n = arr.size();
        long long sumN = n * (n + 1) / 2;
        long long sumSqN = n * (n + 1) * (2 * n + 1) / 6;
        long long sum = 0, sumSq = 0;
        for (int num : arr) {
            sum += num;
            sumSq += (long long)num * num;
        }
        long long diff = sum - sumN;
        long long sumDiff = sumSq - sumSqN;
        long long sumRepMiss = sumDiff / diff;
        int repeating = (sumRepMiss + diff) / 2;
        int missing = repeating - diff;
        return {repeating, missing};
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = s.findMissingRepeating(arr);
    cout << "Repeating number: " << result[0] << endl;
    cout << "Missing number: " << result[1] << endl;
    return 0;
}
