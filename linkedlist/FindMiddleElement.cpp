#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertAtEnd(Node*& head, int val) {
    Node* n = new Node(val);

    if (head == nullptr) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = n;
}

void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

Node* findMiddle(Node* head) {

    int cnt  = 0;
    Node* temp = head;

    while(temp != nullptr){
        cnt++;
        temp = temp->next;

    }

     int mid = cnt / 2;

    temp = head;
    for (int i = 0; i < mid; i++) {
        temp = temp->next;
    }

    return temp;
}

Node* findMiddleOptimal(Node* head){
    Node* slow = head;
    Node* fast = head; 

    while (fast != nullptr && fast ->next != nullptr)
    {
        slow = slow ->next;
        fast = fast ->next ->next;

    }

    return slow;
    
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    cout << "Linked List: ";
    display(head);

    Node* middle = findMiddle(head);

    cout << "Middle Element: " << middle->data << endl;

    Node* mid = findMiddleOptimal(head);

    cout<<"mid = "<<mid->data <<endl;

    return 0;
}