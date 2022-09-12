//
// Created by karun on 12/9/22.
//
void Push_Head(Node** head_org, int val) {
    Node* new_head = new Node();
    new_head->data = val;
    new_head->next = *head_org;
    *head_org = new_head;
}