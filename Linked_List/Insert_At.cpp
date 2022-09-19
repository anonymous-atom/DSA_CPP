//
// Created by karun on 20/9/22.
//
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
