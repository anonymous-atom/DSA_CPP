//
// Created by karun on 20/9/22.
//
#include <sys/param.h>
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

void Max(Node *n) {
    int mx = INT_MIN;
    while (n) {
        if(n->data > mx)
            mx  = n->data;
        n = n->next;
    }
    cout<<mx;
}

Node* search(Node *n, int key) {
    while (n) {
        if(key == n->data)
            return n;
        n = n->next;
    }
}

Node* Insert_Head(Node *n, int nx) {
    Node *nw = new Node();
    nw->data = nx;
    nw->next = n;

    return nw;
}

void Print(Node *n) {
    while (n) {
        cout<<n->data<<" ";
        n = n->next;
    }
}

void Insert_at(Node *n, int at, int val) {

    int pos = 0;

    while (pos < at - 1 &&  n != nullptr) {
        pos++;
        n = n->next;
    }

    //New node
    Node *nw = new Node();
    nw->data = val;
    nw->next = n->next;
    n->next = nw;
}

int main() {
    Node *first, *n1, *n2, *n3;

    first = n1;
    n1= new Node();
    n2 = new Node();
    n3 = new Node();

    n1->data =1;
    n1->next = n2;

    n2->data = 2;
    n2->next = n3;

    n3 = 0;

    Node *new_head = Insert_Head(n1, 88);
    Insert_at(new_head, 2,4444);
    Print(new_head);
}