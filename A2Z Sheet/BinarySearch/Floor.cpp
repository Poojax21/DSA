#include<iostream>
#include<vector>
using namespace std;

class Floorsol{

    public:
    int floorans(vector<int> arr , int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = -1;

        while(low<=high){
            int mid = low + (high - low)/2;

            if(arr[mid] <= x){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }

};

int main (){


    cout<<"Enter number of elements";
    int n;
    cin>>n;

    cout<<"Enter number to be serarched";
    int x ;
    cin>>x;


    cout<<"Enter elements";
    vector<int> arr(n);
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    Floorsol f;

    cout<<f.floorans(arr , x);

    return 0;
}

// 10 , 20 , 30 , 40 , 50 
// 0    1    2     3    4
//  25
// largest less than the number 