#include<iostream>
#include<algorithm>
using namespace std; 


// // brute force
// int main(){
//     int arr[] = {10 , 20 , 30  ,50 , 40  , 70 };
//     int n = 6; 
    
//     int len =  0 ;
//     int maxlen = 0;
//     int k = 80;
//     for (int i = 0; i < n-1; i++)
//     {
//       int sum = 0;
//        for(int j = i ; j<n ; j++){
//           sum+=arr[j];
//           if(sum > k ){
//             break;
//           }
//           else{
//             len = j - i +1;
//             maxlen = max(len , maxlen);
//           }
          
//        }
       
//     }
//     cout<<maxlen;
//     return 0;
// }


int main(){

   int sum = 0;
   int maxlen = 0;
   int left = 0;

   int arr[] = {10 , 20 , 30 , 50 , 40 , 70};
   int n = 6;
   int k = 80;

   for(int r = 0; r < n; r++){   // ✅ correct range
      sum += arr[r];             // expand

      while(sum > k){            // fix window
         sum -= arr[left];
         left++;
      }

      int len = r - left + 1;    // ✅ AFTER fixing
      maxlen = max(maxlen, len);
   }

   cout << maxlen;   // ✅ print once

   return 0;
}