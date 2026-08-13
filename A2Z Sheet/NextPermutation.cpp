#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 1};
    int n = arr.size();
    int ind = -1;

    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    if(ind == -1)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        for(int i = n - 1; i > ind; i--)
        {
            if(arr[i] > arr[ind])
            {
                swap(arr[i], arr[ind]);
                break;
            }
        }

        reverse(arr.begin() + ind + 1, arr.end());
    }

    for(int x : arr)
        cout << x << " ";
}