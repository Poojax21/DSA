#include <iostream>
#include <vector>
#include <algorithm>
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
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

Node* mergeBrute(Node* head1, Node* head2) {
    vector<int> arr;

    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != nullptr){
        arr.push_back(temp1->data);
        temp1 = temp1->next;
    }

        while(temp2 != nullptr){
        arr.push_back(temp2->data);
        temp2 = temp2->next;
    }

    sort(arr.begin() , arr.end());

    Node* head = nullptr;
    Node* tail = nullptr;


    for(int i = 0 ; i< arr.size() ; i++){
         Node* n = new Node(arr[i]);

         if(head == nullptr){
            head  = n ;
            tail = n ; 
         }
         else{
            tail->next = n;
            tail = n;
         }

    }

    return head;
   





}

Node* mergeOptimal(Node* head1, Node* head2) {

    Node* t1 = head1;
    Node* t2 = head2;

    Node dummy(-1);
    Node* t = &dummy;

    while (t1 != nullptr && t2 != nullptr) {

        if (t1->data <= t2->data) {
            t->next = t1;
            t1 = t1->next;
        }
        else {
            t->next = t2;
            t2 = t2->next;
        }

        t = t->next;
    }

    if (t1 != nullptr) {
        t->next = t1;
    }

    if (t2 != nullptr) {
        t->next = t2;
    }

    return dummy.next;
}

int main() {

    Node* head1 = nullptr;
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 5);

    Node* head2 = nullptr;
    insertAtEnd(head2, 2);
    insertAtEnd(head2, 4);
    insertAtEnd(head2, 6);

    cout << "List 1: ";
    display(head1);

    cout << "List 2: ";
    display(head2);

    Node* bruteResult = mergeBrute(head1, head2);

    cout << "\nBrute Force Merge: ";
    display(bruteResult);

    Node* head3 = nullptr;
    insertAtEnd(head3, 1);
    insertAtEnd(head3, 3);
    insertAtEnd(head3, 5);

    Node* head4 = nullptr;
    insertAtEnd(head4, 2);
    insertAtEnd(head4, 4);
    insertAtEnd(head4, 6);

    Node* optimalResult = mergeOptimal(head3, head4);

    cout << "Optimal Merge: ";
    display(optimalResult);

    return 0;
}