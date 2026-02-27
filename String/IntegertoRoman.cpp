#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string IntegertoRoman(int num) {
        string ans = "";

        if(num >= 1000){
            ans += string(num / 1000, 'M');
            num %= 1000;   
        }

        if(num >= 900){
            ans += "CM";
            num -= 900;
        }
        else if(num >= 500){
            ans += "D";
            num -= 500;
            ans += string(num / 100, 'C');
            num %= 100;
        }
        else if(num >= 400){
            ans += "CD";
            num -= 400;
        }
        else{
            ans += string(num / 100, 'C');
            num %= 100;
        }

        if(num >= 90){
            ans += "XC";
            num -= 90;
        }
        else if(num >= 50){
            ans += "L";
            num -= 50;
            ans += string(num / 10, 'X');
            num %= 10;
        }
        else if(num >= 40){
            ans += "XL";
            num -= 40;
        }
        else{
            ans += string(num / 10, 'X');
            num %= 10;
        }

        if(num >= 9){
            ans += "IX";
            num -= 9;
        }
        else if(num >= 5){
            ans += "V";
            num -= 5;
            ans += string(num, 'I');
        }
        else if(num >= 4){
            ans += "IV";
        }
        else{
            ans += string(num, 'I');
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Roman: " << obj.IntegertoRoman(num);

    return 0;
}
