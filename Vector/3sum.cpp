#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> triplet(int n , vector<int> &num ){

    vector<vector<int>> ans ; 
    sort(num.begin() , num.end());

    for(int i = 0 ; i<n ; i++){
        if(i > 0 && num[i] == num [i-1]) continue;

        int j = i+1;
        int k = n-1;

        while(j < k){
            int sum = num[i] + num[j] + num[k];

            if(sum < 0 ){
                j++;
            }
            else if(sum >0) {
                k--;
            }
            else{
                ans.push_back({num[i] , num[j] , num[k]});
                j++;
                k--; 

                while(j<k && num[j] == num[j-1]) j++;
                while(j<k && num[k] == num[k+1]) k--;
            }
        }

        
    }

     return ans;

}

int main(){
    vector<int> num = {-1,0,1,2,-1,-4};
    int n = num.size();
    
    vector<vector<int>> result = triplet(n , num);

    for(int i = 0 ; i<result.size() ; i++){
        for(int j = 0 ; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0 
    ;
}