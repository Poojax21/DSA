#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int val){
        data = val;
        next = nullptr;
    }
};

void reverse(Node* &head){
    Node* temp = head;
    Node* front  ;
    Node* prev = nullptr;

    while(temp != nullptr){
        front = temp ->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    head = prev;
    
}

void insert(Node * &head , int val){

    Node* n = new Node(val);

    if(head == nullptr){
        head = n ; 
        return ; 
    }

    Node* temp = head;

    while(temp ->next != nullptr){
        temp = temp ->next;
    }


    temp ->next = n ;


}

void display(Node* &head){
    Node* temp = head;

        while(temp != nullptr){
        cout<<temp ->data<<"->";
        temp = temp ->next;
        
    }
    cout<<"NULL";
}

int main(){

    Node* head = new Node(1);

    insert(head  ,2);
    insert(head , 3);
    insert(head , 4);
    insert(head  ,5);
    insert(head , 6);
    insert(head , 7);
    display(head);
    reverse(head);
    cout<<endl;
    display(head);




}
