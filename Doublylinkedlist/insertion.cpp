#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head = nullptr;

node* create(int val){
    node* nn = new node(val);
    nn ->data = val;
    nn -> next = nullptr;
    nn->prev == nullptr;
    return nn;
} 


void insertatbegin(int val){

    node* nn = create(val);
     if(head == nullptr){
        head = nn;
        return;
     }

     nn ->next = head;
     head->prev =nn;
     head == nn;
}

void insertatend(int val){

    node* nn = create(val);
    if(head == nullptr){
        head = nn ; 
        return;
    }
    node* temp = head;

    while(temp ->next !=nullptr ){
        temp = temp ->next;  
    }
    temp ->next = nn;
    nn->prev = temp; 
}

void insertatpos(int val , int pos){
    node* nn = create(val); 
    if(pos == 1){
        nn->next =  head;
        head ->prev = nn ;
        head = nn ; 
    }

    node*  temp = head ; 
    int count= 1;
    
    while(temp ->next!= nullptr && count < pos -1 ){
        temp = temp->next; 
        count++;
    }
    if(temp->next ==nullptr ){
        cout<<"pos out of index";
    }

   
    nn->next = temp ->next;
    nn-> prev = temp; 

    if(temp->next  != nullptr){
        temp->next->prev = nn ;
        
        temp->next = nn;
    }
}