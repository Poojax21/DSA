#include <iostream>
using namespace std;

int sum = 1;

void print(int n) {
    if (n == 0) {    
        return;
    }
    else {
        print(n - 1);  
        sum *= n; 
    }
}

int main() {
    int n;
    
    cout << "Enter number";
    cin >> n;

    print(n);
    cout << sum;

    return 0;
}