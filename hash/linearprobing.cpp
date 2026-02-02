#include<iostream>
using namespace std ;

#define SIZE 11

int hashTable[SIZE];

void init(){
    for(int i = 0 ; i<  SIZE ; i++){
        hashTable[i] = -1;
    }
}

void insert(int key ){
    int index = key % SIZE;

    while(hashTable[index] != -1){
        index = (index + 1) % SIZE;
    }
    hashTable[index] = key ;
} 

void display(){
    for(int i =  0 ; i < SIZE ; i++){
        cout<<i << "->" << hashTable[i]<<endl;
    }
}

int main(){
    init();

    int keys[] = {22, 33, 44, 25};
    for(int key : keys)
    insert(key);

    display();
    return 0 ; 
}