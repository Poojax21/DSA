#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> foursum(int n, vector<int> &num, int target){

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                for(int l = k + 1; l < n; l++){
                    if(num[i] + num[j] + num[k] + num[l] == target){
                        vector<int> temp = {num[i], num[j], num[k], num[l]};
                        sort(temp.begin(), temp.end());
                        if(find(ans.begin(), ans.end(), temp) == ans.end()){
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }
    }

    return ans;
}

int main(){

    vector<int> num = {1,2,3,4,5,6};
    int n = num.size();
    int target = 10;

    vector<vector<int>> ans = foursum(n, num, target);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}