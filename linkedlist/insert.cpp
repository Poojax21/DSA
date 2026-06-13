#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next ;

    Node(int val){
        data = val;
        next = nullptr;
    }

};

void traversal(Node* head){

    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next; 
    }

    cout<<"NULL"<<endl;

}

void insertatbegin(Node* &head , int val){

    Node* n = new Node(val);
    n->next = head;
    head = n; 

}

void insertatmiddle(Node* &head , int val , int pos){

    Node* n = new Node(val);
    
    if(pos == 1){
    Node* n = new Node(val);
    n->next = head;
    head = n; 
    return ;
    }



    
        Node* temp = head;
        for(int i = 1 ; i<pos -1 && temp !=nullptr ; i++){
            temp = temp->next; 
        }

          if(temp == nullptr){
        cout<<"Invalid position";
        return; 
    }

    n->next = temp->next ;
    temp->next = n;
        
    }

    void insertatend(Node* head , int val){

        Node* n = new Node(20);
        Node* temp = head;
         
        if(head == nullptr){
            head = n ;
            return ;
        }

        while(temp->next != nullptr){
            temp = temp->next ;
        }

        temp->next = n ;

    }

  

void creation(){
        int arr[] = {100 , 30 , 200 , 40 , 50 , 32};

    Node* head = nullptr;
    Node* tail = nullptr;
    

    for(int i = 0 ; i<=6 ; i++){
    Node* n = new Node(arr[i]);

    if(head == nullptr){
        head = n ; 
        tail = n ; 
    }else{
        tail->next = n;
        tail = n;
    }

}

}



int main (){

 int arr[] = {100 , 30 , 200 , 40 , 50 , 32};

    Node* head = nullptr;
    Node* tail = nullptr;
    

    for(int i = 0 ; i<=6 ; i++){
    Node* n = new Node(arr[i]);

    if(head == nullptr){
        head = n ; 
        tail = n ; 
    }else{
        tail->next = n;
        tail = n;
    }

}

traversal (head);
insertatbegin(head , 04);
traversal (head);
insertatmiddle(head , 30 , 2);
traversal (head);
insertatmiddle(head , 3 , 3);
traversal (head);
insertatend(head , 60 );
traversal (head);


}