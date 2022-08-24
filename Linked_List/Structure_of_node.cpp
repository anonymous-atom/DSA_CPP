//
// Created by karun on 24/8/22.
//Implementing Linked List

struct Node {
    int data;
    struct Node *next;
};

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
    p3->next = NULL;

}
