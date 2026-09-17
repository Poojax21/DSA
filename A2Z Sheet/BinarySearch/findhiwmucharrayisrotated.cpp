#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class rotated{
    public:
    int rotatedindex(vector<int> arr){
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mini = INT_MAX;
        int ind = -1;

        while(low <= high ){
            int mid = low + (high - low )/2;
            if(arr[mid] < mini){
                mini = arr[mid];
                ind = mid;


            }
            else if(arr[low] <= arr[mid]){
                if(arr[low] < mini){
                    mini  = arr[low];
                    ind = low;
                    
                }
                low = mid + 1;
            }
            else{
                if(arr[mid] < mini){
                    mini = arr[mid];
                    ind = mid;
                   
                }
                 high = mid - 1;
            }
        }
        return ind;
    }
};


int main(){

    int n;
    cout<<"Enter number of elements";
    cin>>n;

    vector<int> arr(n);

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    rotated r;
    cout<<r.rotatedindex(arr);
    
}