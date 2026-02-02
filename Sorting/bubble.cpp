#include<iostream>
using namespace std;

void Bubble() {
    int a[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bubble Sort Logic
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    
    cout << "Sorted elements: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    Bubble();
    return 0;
}
