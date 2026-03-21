#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hasharr[26];
    int s[100];
        for(int i = 0 ; i<n ; i++){
            cin>>s[i];
        }

        



for(int i = 0 ; i<n ; i++){
    hasharr[s[i] - 'a']++;


}
    int q;
    cin >> q;

    while(q--){
        char ch;
        cin >> ch;
        cout << hasharr[ch - 'a'] << endl;
    }

}