#include <iostream>
#include <vector>
using namespace std;

int removeduplicates(vector<int> &arr) {
    int n = arr.size();

    if (n == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = removeduplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNumber of unique elements: " << k;

    return 0;
}