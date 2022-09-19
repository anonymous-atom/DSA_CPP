//
// Created by karun on 19/9/22.
//
void Count_Nodes(Node *p) {
    static int count= 0;
    while (p != 0) {
        count++;
        p = p->next;
    };
    cout<<count;
}