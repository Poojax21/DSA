#include<iostream>
#include<climits>
#include<vector>
using namespace std;

class mini{

    public:
    int minimumsorted(vector<int> arr  ){
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mini = INT_MAX;

        while(low <= high ){
            int mid = low + (high - low)/2;

            if(arr[mid] < mini){
                mini = arr[mid];

            }


            if(arr[low] <= arr[mid]){
                if(mini > arr[low])
                {mini = arr[low];}
                low = mid + 1;
            }
            else if(arr[mid] <=arr[high]){
                if(mini > arr[mid])
               { mini = arr[mid];}
                high = mid - 1;
            }

        }

        return mini;
    }
};

int main(){
    int n ;
    cout<<"Enter number of element "<<endl;
    cin>>n;


    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    mini m;

    cout<<m.minimumsorted(arr);

}