#include<iostream>
using namespace std; 

int StringLen(char st[]){
    int i = 0; 
    while(st[i] != '\0'){
        i++;
    }
    return i;
}






int main(){

    // Lenght 
    char st[] = "Pooja";
    cout<<StringLen(st);


    
    return 0 ; 
} 