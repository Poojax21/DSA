#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> arr = {10 , 40 , 30 , 20 , 40 , 90 };
    int n = arr.size();

    vector<vector<int>> res;

    for(int i = 0 ; i < n ; i++){
        vector<int> temp;

        for(int j = i ; j < n ; j++){
            temp.push_back(arr[j]);
            res.push_back(temp);
        }
    }

    for(int i = 0 ; i < res.size() ; i++){
        for(int j = 0 ; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}