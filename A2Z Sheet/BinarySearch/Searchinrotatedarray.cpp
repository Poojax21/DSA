#include<iostream>
#include<vector>
using namespace std;


class Search{

    public:
    int Searchans(vector<int> arr , int x ){
        int n = arr.size();
        int low  = 0;
        int high = n -1 ;


        

        while(low <= high ){
            int mid  = low + (high - low ) /2;

            if(arr[mid] == x ){
                return mid;
            }
            else if(arr[low] <= arr[mid]){
                if(arr[low] <= x && x < arr[mid]){
                    high = mid - 1;
                }

                else{
                    low = mid + 1;
                }
            }

            else{

                 if(arr[mid] <= x && x < arr[high]){
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

    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;


    vector<int> arr(n);
    cout<<"Enter numbers" << endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];

    }


    cout<<"Enter element to be searched";
    int x ;
    cin>>x;

    Search s;



    cout<<s.Searchans(arr , x);

    return 0;

}