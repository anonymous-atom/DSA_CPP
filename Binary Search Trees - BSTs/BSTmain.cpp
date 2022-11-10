//
// Created by karun on 9/11/22.
//
#include <iostream>
using namespace std;
struct BST {
    BST* lchild;
    int data;
    BST* rchild;
};
BST* createNode(int key) {
    BST* newN = new BST();
    newN->data = key;
    newN->lchild = newN->rchild = 0;
}

BST* insert(BST* root, int key) {
    if (root == 0) return createNode(key);

    if (key > root->data) insert(root->rchild, key);

    else insert(root->lchild, key);

    return root;
}

void Preorder(BST* root) {
    if (root == 0) return;
    Preorder(root->lchild);
    cout << root->data << " ";
    Preorder(root->rchild);
}