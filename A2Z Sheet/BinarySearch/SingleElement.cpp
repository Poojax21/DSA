#include<iostream>
#include<vector>
using namespace std;

class SingleElement{

    public:
    int Findsingleelement(vector<int> arr){
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while(low <= high ){
            int mid = low + (high - low)/2;
            if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
                return arr[mid];
            }
            else if(arr[mid] == arr[mid - 1]){
                if(mid % 2 == 0){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            else if (arr[mid] == arr[mid  + 1]){
                if(mid % 2 == 0){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return mid;
            }
        }
    };

