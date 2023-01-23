//
// Created by karun on 17/11/22.
//

#include <iostream>
using namespace std;
struct Node {
    Node *left;
    Node *right;
    int data;
};

Node* newNode(int key) {
    Node *temp = new Node();
    temp->data = key;
    temp->right = temp->left = 0;

    return temp;
}

Node* insert(Node *root, int key) {

    if (root == 0) {
        return newNode(key);
    } else if(key < root->data) {
        root->left = insert(root->left, key);
    } else root->right = insert(root->right, key);
}

Node* search(Node *root, int key) {

    if (root == 0){
        cout << "NULL";
        return nullptr;
    }
    if (root->data == key) {
        cout << "Found \n";
        return root;
    }
    else if (key < root->data)
        search(root->left, key);

    else search(root->right, key);
}

void InorderPrint(Node *root) {
    InorderPrint(root->left);
    cout <<root->data;
    InorderPrint(root->right);
}

int main(){
    Node *root = 0;
    insert(root,20);

    cout << "Printing \n";

    InorderPrint(root);
}