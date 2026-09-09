#include<iostream>
#include<vector>
using namespace std;

class Search{

    public:

    int searchplace(vector<int>arr , int x){
        int n = arr.size();

        int low = 0; 
        int high = n-1;
        int ans = n;
        
        while(low <= high ){
            int mid = low + (high - low )/2;
            if(arr[mid] >= x){
               ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;

    }

};

int main (){

    Search s;
    cout<<"Enter number of elements";
    int n ;
    cin>>n;

    cout<<"enter element to be insertrd ";
    int x;
    cin>>x;

    vector<int> arr(n);

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<s.searchplace(arr , x);



}