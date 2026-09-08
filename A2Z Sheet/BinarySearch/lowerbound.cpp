#include<iostream>
#include<vector>
using namespace std;

class Lower{
    public:
    int lowerfind(vector<int> arr , int x){
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int ans = n - 1;


        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;



            }
            else{
                low = mid+1;
            }
        }
        return ans;



    }



};

int main (){


    cout<<"Enter number of elements";
    int n;
    cin>>n;


    cout<<"Enter number to be searched";
    int x;
    cin>>x;

    vector<int> arr(n);

    cout<<"Enter array element";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }


    Lower l;
    
    cout<<l.lowerfind(arr , x);;


}