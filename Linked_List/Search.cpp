//
// Created by karun on 19/9/22.
//
Node* search(Node *n, int key) {
    while (n) {
        if(key == n->data)
            return n;
        n = n->next;
    }
}