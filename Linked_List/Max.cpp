//
// Created by karun on 19/9/22.
//
void Max(Node *n) {
    int mx = INT_MIN;
    while (n) {
        if(n->data > mx)
            mx  = n->data;
        n = n->next;
    }
    cout<<mx;
}