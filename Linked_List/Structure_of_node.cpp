//
// Created by karun on 24/8/22.
//Implementing Linked List


#include <iostream>

struct Node {
    int data;
    struct Node *next;
};

void Print_Linked(struct Node *n) {
    //Printing Until The Last Node Is Pointing Nowhere
    while (n != 0) {
        std::cout<<n->data<<"\n";
        n = n->next;
    }
}


int main() {
    struct Node *p1, *p2, *p3;

    p1 = new Node();
    p2 = new Node();
    p3 = new Node();

    p1->data = 1;
    p1->next = p2;

    p2->data = 2;
    p2->next = p3;

    p3->data = 3;
    p3->next = 0;

    Print_Linked(p1);
}
