//
// Created by karun on 18/10/22.
//
#include <iostream>

class Queue {
    int size;
    int front;
    int rear;
    int *Q;
public:
    Queue(){
        size = 10;
        front = rear = -1;
        Q = new int[this->size];
    }
    Queue(int size) {
        this->size = size;
        front = rear = -1;
        Q = new int[this->size];
    }
    void enqueue(int x);
    int dequeue();
};
void Queue::enqueue(int x) {
    if (rear == size - 1)
        std::cout <<"Queue is Full";
    else {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dequeue() {
    int x = -1;
    if (front == rear)
        std::cout << "Queue is Empty";
    else {
        front++;
        x = Q[front];
    }
    return x;
}