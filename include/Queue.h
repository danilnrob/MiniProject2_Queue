/*
Dani Robinson
Mini Project #2
2/12/26
*/
#ifndef QUEUE_H

#define QUEUE_H

class Queue {
    private:
        int* elements;
        int frontq;
        int backq;
        int sizeq;
        int capacity;
    public: 
        Queue(int cap);          // Constructor
        void enqueue(int item);  // Adds to queue
        int dequeue();           // Removes front of queue
        int front();             // Shows front of queue
        bool isEmpty();          // Checks if queue is empty
        bool isFull();           // Checks if queue is full
        int size();              // Checks size of queue
        void clear();            // Empties the queue
        void print();            // Prints every element in queue
};

#endif // QUEUE_H