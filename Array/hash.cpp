#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hasharr[26] = {0};   
    int n;
    cout << "Enter number of characters in string: ";
    cin >> n;

    string s;
    cout << "Enter the string: ";
    cin >> s;

   
    for (int i = 0; i < s.size(); i++)
    {
        hasharr[s[i] - 'a']++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        char c;
        cin >> c;
        cout << hasharr[c - 'a'] << endl;
    }

    return 0;
}
