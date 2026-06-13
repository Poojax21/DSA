#include<iostream>
using namespace std;


class Node{
    public:
    int data ; 
    Node* next;

    Node(int val){
        data =  val;
        next = nullptr;

         }
};

         void traversal(Node* h){
            Node* temp = h;
            while(temp != nullptr){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL";


         }

         


int main(){

    // Node* head = new Node(10);
    // Node* sec = new Node(20);
    // Node* third = new Node(30);

    // head ->next = sec;
    // sec ->next = third;

    Node* head = nullptr;
    Node* tail = nullptr;

    int arr[] = {104,230,230,140,750};

    for(int i = 0 ; i<=10 ; i++){

        Node* n  = new Node(arr[i]);

        if(head == nullptr){
            head = n ;
            tail = n ;
        }
        else{
            tail->next  = n;
            tail = n;
        }

    }


    traversal(head);







  return 0;



}