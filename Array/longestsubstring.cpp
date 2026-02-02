

#include<iostream>
using namespace std; 
#include <string>

// //Brute force
// int longestsubstring(string s){
//     int n = s.length();
//     int maxlen = 0;


//     for(int i = 0 ; i< n ;i++){

//         int hasharr[256] = {0};
//         for (int j = i; j < n; j++)
//         {
//             if(hasharr[s[j]] == 1) break;
//             hasharr[s[j]] = 1;
//             int len = j - i + 1; 
//             maxlen= max(len , maxlen);
//         }
        
//     }
//         return maxlen;
// }

// int main(){

//     string s; 
//     cout<<"enter a string";
//     cin>>s;
    
//     int ans = longestsubstring(s);
//     cout << "Longest substring length: " << ans;


// }

class solution{
    public:
    int longestsubstring(string s ){

        int hasharr[256];
        for (int i = 0; i < 256; i++)
        {
            hasharr[i] = -1;
        }

        int left = 0 ; 
        int mxlen = 0;
        
        for(int right = 0 ; right < s.size() ; right++){
            char c = s[right];
            if(hasharr[ch] > left ){
                left = hasharr[ch]+1;
            }

            hasharr[ch] = right;
            int len = right - left + 1;
            maxlen = max(maxlen , len )
        }
        return maxlen; 
    }

};


int main(){

    solution s; 
    s.longestsubstring("abcdefg");
}