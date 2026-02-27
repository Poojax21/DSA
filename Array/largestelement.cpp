#include <iostream>
using namespace std;

int main() {
   
    int arr[] = {3, 5, 6, 9, 12};
    int n = 5;

    int largest = arr[0];  

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "largest "<<largest ;

    return 0;
}


