#include<iostream>
#include<vector>
using namespace std;

class squarer{

    public:
    int findsquareroot(int n){
        int ans;
       

        int low = 0; 
        int high = n;

        while(low <= high ){
            int mid = low + (high - low)/2;
            if(mid * mid == n){
                ans = mid;
                return ans;
            }

            else if(mid * mid < n){
                ans = mid;
                low = mid + 1;
            }
            else if (mid * mid > n)
            {
                high = mid - 1;
            }
            

            
        }
        return ans;
    }
};

int main(){
    int n ;
    cout<<"enter number";
    cin>>n;

    squarer s;
    cout<<s.findsquareroot(n);
}