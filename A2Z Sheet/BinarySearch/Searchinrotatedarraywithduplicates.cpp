#include<iostream>
#include<vector>
using namespace std;

class Search{

    public:
    int searchwithduplicates(vector<int> arr , int x){

        int n = arr.size();
        int low = 0;
        int high = n - 1;
    
    
        while(low <= high){
            int mid = low + (high - low ) / 2;


            
            if(arr[mid] == x){
                return mid;

                
            }

            if(arr[low] == arr[mid] && arr[mid] ==  arr[high]){
                low++;
                high--;
            }

            

             else if(arr[low] <= arr[mid]){
                if(arr[low] <= x && x <= arr[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }

            else{
                if(arr[mid] <= x && x <= arr[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }

            }

            
        }
        return -1;
    
    
    }


};


int main(){

    cout<<"Enter element to search";
    int x;
    cin>>x;


    cout<<"Enter number of elements";
    int n;
    cin>>n;


    vector<int> arr(n);

    cout<<"Enter elements";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    Search s;

    cout<<s.searchwithduplicates(arr , x);
}


