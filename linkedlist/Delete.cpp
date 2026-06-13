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

void insertAtEnd(Node* &head, int val) {
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

void deleteAtBegin(Node* &head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;
}

void deleteAtEnd(Node* &head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteAtPos(Node* &head, int pos) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    if (pos == 1) {
        deleteAtBegin(head);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid Position\n";
        return;
    }

    Node* del = temp->next;

    temp->next = del->next;

    delete del;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "Original List:\n";
    display(head);

    deleteAtBegin(head);

    cout << "\nAfter Delete At Beginning:\n";
    display(head);

    deleteAtEnd(head);

    cout << "\nAfter Delete At End:\n";
    display(head);

    deleteAtPos(head, 2);

    cout << "\nAfter Delete At Position 2:\n";
    display(head);

    return 0;
}