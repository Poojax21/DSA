#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// // Brute force
// vector<vector<int>> foursum(int n, vector<int> &num, int target){

//     vector<vector<int>> ans;

//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             for(int k = j + 1; k < n; k++){
//                 for(int l = k + 1; l < n; l++){
//                     if(num[i] + num[j] + num[k] + num[l] == target){
//                         vector<int> temp = {num[i], num[j], num[k], num[l]};
//                         sort(temp.begin(), temp.end());
//                         if(find(ans.begin(), ans.end(), temp) == ans.end()){
//                             ans.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//     }

//     return ans;
// }
vector<vector<int>> foursum(int n , vector<int>nums , int t){
    vector<vector<int>> ans;
    sort(nums.begin() , nums.end());

    for(int i = 0 ; i<n ; i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j<n ; j++){
            if(j !=i && nums[j] == nums[j-1]) continue;
        

        int k = j+1;
        int l = n-1;
        int sum ;

        while(k < l){
            sum = nums[i];
            sum += nums[j];
            sum += nums[k];
            sum += nums[l];

            if(sum == t){
                vector<int> temp = {nums[i] , nums[j] , nums[k] , nums[l]};
                ans.push_back(temp);
                k++ ; l-- ;
                while(k < l && nums[k] == nums[k-1]); k++;
                while(k <l && nums[l] == nums[l-1]); l--;


            }
            else if(sum >t){
                l--;
            }
            else {
                k++;
            }
        }
    }
}
return ans;
}

int main(){

    vector<int> num = {1,2,3,4,5,6};
    int n = num.size();
    int target = 11;

    vector<vector<int>> ans = foursum(n, num, target);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}