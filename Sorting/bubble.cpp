#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        bool didSwap = false;

        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                didSwap = true;
            }
        }

        if(didSwap == false) {
            break;
        }
    }
}

int main() {

    int arr[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    cout << "Sorted elements: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}