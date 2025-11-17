#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int val) {
        data = val;
        right = left = nullptr;
    }
};

Node* bst(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = bst(root->left, val);
    } 
    else {
        root->right = bst(root->right, val);
    }

    return root;
}

Node* findMin(Node* root) {
    if (root == nullptr) {
        return nullptr;
    }

    while (root->left != nullptr) {
        root = root->left;
    }

    return root;
}

Node* findmax (Node* root){
     if(root == nullptr ){
        return nullptr;
     }

     while(root->right!= nullptr){
        root = root ->right;
     }
        return root;
    
} 



int main() {
    Node* n = nullptr;
    n = bst(n, 50);
    n = bst(n, 20);
    n = bst(n, 30);
    n = bst(n, 10);
    n = bst(n, 5);
    n = bst(n, 40);
    

    Node* minnode = findMin(n);
    if (minnode != nullptr) {
        cout << "Min Node: " << minnode->data << endl;
    }

    Node* maxnode = findmax(n);
    if(maxnode != nullptr) {
        cout<< "Max Node" << maxnode->data << endl;
    }

    return 0;
}
