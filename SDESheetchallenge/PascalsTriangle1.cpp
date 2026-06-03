#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for(int j = 1; j < i; j++) {
                row[j] = result[i-1][j-1] + result[i-1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

int main() {
    Solution s;
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;
    
    vector<vector<int>> result = s.generate(numRows);
    
    cout << "Pascal's Triangle:\n";
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}