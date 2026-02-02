#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// Create new node
Node* creation(int val) {
    Node* nn = new Node;
    nn->data = val;
    nn->next = nullptr;
    return nn;
}

// Insert at beginning
void insertatbegin(int val) {
    Node* nn = creation(val);
    nn->next = head;
    head = nn;
}

// Insert at end
void insertatend(int val) {
    Node* nn = creation(val);

    if (head == nullptr) {
        head = nn;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = nn;
}

// Insert at middle (position based)
void insertatmid(int val, int pos) {
    Node* nn = creation(val);

    if (pos == 1) {
        nn->next = head;
        head = nn;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    nn->next = temp->next;
    temp->next = nn;
}

// Delete at beginning
void deleteatbegin() {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete at middle (position based)
void deleteatmid(int pos) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp->next != nullptr && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp->next == nullptr) {
        cout << "Position out of range\n";
        return;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// Traverse list
void traverse() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


void deleteatbeg(){
    if(head== nullptr){
        cout<<"its empty";
        return;
    } 

    Node* temp = head;
    head = head ->next;
    delete temp;

} 

void deleteatmd(int pos){
    if(head == nullptr){
        cout<<"empty";
        return;
    }
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        
    }

    int count = 1;
    Node* temp = head;
    while(temp->next != nullptr && count < pos -1){
        temp = temp->next;
        count++;
    }

    if(temp ->next == nullptr){
        cout<<"out of bound";
        return ;
    }
    Node* del = temp->next ;
    temp->next = del->next;
    delete del;

}

// Main function
int main() {
    insertatbegin(10);
    insertatend(30);
    insertatmid(20, 2);
    insertatend(40);

    cout << "Linked List: ";
    traverse();

    deleteatbegin();
    cout << "After delete at begin: ";
    traverse();

    deleteatmid(2);
    cout << "After delete at position 2: ";
    traverse();

    return 0;
}
