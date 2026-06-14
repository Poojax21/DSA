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

Node* DeleteMiddle(Node* head) {

    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    int cnt = 0;
    Node* temp = head;

    while (temp != nullptr) {
        cnt++;
        temp = temp->next;
    }

    int midPos = cnt / 2;

    temp = head;

    for (int i = 1; i < midPos; i++) {
        temp = temp->next;
    }

    Node* middle = temp->next;
    temp->next = middle->next;

    delete middle;

    return head;
}

Node* DeleteMiddleOptimal(Node* head) {

    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

    return head;
}

int main() {

    Node* head = nullptr;

    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    cout << "Original List: ";
    display(head);

    head = DeleteMiddle(head);

    cout << "After Deleting Middle Brute force: ";
    display(head);

    head = DeleteMiddleOptimal(head);

    cout << "After Deleting Middle optimal : ";
    display(head);

    return 0;
}