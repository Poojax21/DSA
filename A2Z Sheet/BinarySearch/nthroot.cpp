#include <iostream>
using namespace std;

class NthRoot {
public:
    int findNthRoot(int n, int m) {
        int low = 1;
        int high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long ans = 1;

            for (int i = 0; i < n; i++) {
                ans *= mid;

                if (ans > m)
                    break;
            }

            if (ans == m) {
                return mid;
            }
            else if (ans > m) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return -1;
    }
};

int main() {
    NthRoot nr;

    int n , m;

 cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    cout << nr.findNthRoot(n, m);

    return 0;
}