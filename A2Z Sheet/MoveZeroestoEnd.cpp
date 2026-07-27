#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int i = 0;

        
        while (i < n && arr[i] != 0) {
            i++;
        }

        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] != 0) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
};

int main(){

    Solution s;
    vector<int>arr = {10 , 20   , 0  , 4 , 0 , 320};
    s.pushZerosToEnd(arr);
    return 0;
}