#include<iostream>
#include<vector>
using namespace std;


class FLoccur{
    public:

    

    int Foccurence(vector<int> arr , int x ){
        int n = arr.size();
         int low = 0;
        int high = n - 1;
        int F  =-1; 
        int L = -1;
       

    
        while(low <= high ){
            int mid = low + (high - low)/2;
            if (arr[mid] >= x){
                F = mid;
                high = mid - 1;

            }
            else{
                low = mid + 1;
            }
        }

        return F;
    }

    int Loccurence(vector<int> arr , int x){

        int n = arr.size();
         int low = 0;
        int high = n - 1;
        int F  =-1; 
        int L = -1;

        while(low <= high ){
            int mid = low + (high - low)/2;
            if (arr[mid] > x){
                L = mid;
                high = mid - 1;

            }
            else{
                low = mid + 1;
            }
        }
        L = L -1;

        return L;
    }




};

int main(){

    cout<<"Enter number of elements";
    int n ;
    cin>>n;


    cout<<"number to be searched";
    int x;
    cin>>x;

    vector<int> arr(n);

    cout<<"Enter the elements";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    vector<int> ans;

    FLoccur fl;

    ans.push_back(fl.Foccurence(arr , x));
    ans.push_back(fl.Loccurence(arr , x));


    cout << ans[0] << endl;  // First occurrence
    cout << ans[1] << endl;  // Last occurrence


    cout<< ans[1] - ans[0] + 1;

    
}