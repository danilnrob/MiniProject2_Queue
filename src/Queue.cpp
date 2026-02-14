#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(int cap) {
    frontq = 0;
    sizeq = 0;
    backq = 0; 
    capacity = cap;
    elements = new int[cap];
}

void Queue::enqueue(int item) {
    if (isFull()) {
        throw overflow_error("Can't enqueue to full queue!");
    }
    elements[backq] = item;
    sizeq += 1;
    backq = (backq + 1) % capacity;
}
int Queue::dequeue() {
    if (isEmpty()) {
        throw underflow_error("Can't dequeue from empty queue!");
    }
    int result = elements[frontq];
    sizeq -= 1;
    frontq = (frontq + 1) % capacity;
    return(result);
}
int Queue::front() {
    int result = elements[frontq];
    return(result);
}
bool Queue::isEmpty() {
    return (sizeq == 0); 
}
bool Queue::isFull() {
    return (sizeq == capacity);
}
int Queue::size() {
    return(sizeq);
}
void Queue::clear() {
    sizeq = 0;
    frontq = backq;
}
void Queue::print() {
    for(int i = 0; i < sizeq; i++) {
        cout << elements[((frontq + i) % capacity)] << " ";
    }
}