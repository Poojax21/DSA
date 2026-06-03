#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        if(intervals.empty()) return merged;
        
        sort(intervals.begin(), intervals.end());
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] <= end) {
                end = max(end, intervals[i][1]);
            } else {
                merged.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        merged.push_back({start, end});
        return merged;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;
    
    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter intervals (start end):\n";
    for(int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }
    
    vector<vector<int>> result = s.merge(intervals);
    
    cout << "Merged intervals:\n";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i][0] << " " << result[i][1] << endl;
    }
    return 0;
}