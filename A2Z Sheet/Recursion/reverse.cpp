
#include <iostream>
#include <vector>
using namespace std;

void swapp(vector<int>& arr, int n, int left, int right) {
    if (left >= right) {
        return;
    }

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    swapp(arr, n, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    swapp(arr, n, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
