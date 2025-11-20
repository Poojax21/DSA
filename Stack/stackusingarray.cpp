#include <iostream>
using namespace std;

int stackarr[100];
int top = -1; 

void push(int x ){
    top++;
    stackarr[top]  = x; 
}

int pop(){
    int s = stackarr[top];
    top--;
    return(s); 
}

int peek(){
    return stackarr[top];
} 

bool empty() {
    return top == -1;
}

int main(){
    push(10);
    push(20);
    push(30);
    cout<<pop(); 
    cout<<peek();
} 

