#include <iostream>
#include "Queue.h"
using namespace std; 

int main() {
    int input; 
    do {
        cout << "What's your queue size?: ";
        cin >> input;
    } while (input < 1);

    Queue queue(input);

    int element;
    do {
        cout << "Option 1: Enqueue" << endl;
        cout << "Option 2: Dequeue" << endl;
        cout << "Option 3: Front" << endl;
        cout << "Option 4: Size" << endl;
        cout << "Option 5: Print" << endl; 
        cout << "Option 6: Clear" << endl;
        cout << "Option 7: Exit" << endl;
        cout << "Option selection: "; 
        cin >> input;

        cout << endl;
        switch(input) {
            case 1: {
                if(queue.isFull()) {
                    cout << "Queue is Full!" << endl;
                    cout << endl;
                    break;
                }
                cout << "Please add a number to the queue: ";
                cin >> element;
                cout << endl;
                queue.enqueue(element);
                cout << "Number added: " << element << endl;
                cout << endl;
                break;
            }
            case 2: {
                if (queue.isEmpty()) {
                    cout << "No element to dequeue, queue empty." << endl;
                    cout << endl;
                    break;
                }
                cout << "Number removed " << queue.dequeue() << endl;
                cout << endl;
                break;
            }
            case 3: {
                if (queue.isEmpty()) {
                    cout << "No element at the front, queue empty." << endl;
                    cout << endl;
                    break;
                }
                cout << "The number at the front is: " << queue.front() << endl;
                cout << endl;
                break;
            }
            case 4: {
                cout << "The size of your queue is: " << queue.size() << endl;
                cout << endl;
                break;
            }
            case 5: {
                cout << "Printing your queue: ";
                queue.print();
                cout << endl;
                cout << endl;
                break;
            }
            case 6: {
                cout << "Queue cleared" << endl;
                queue.clear();
                cout << endl;
                break; 
            }
            case 7: {
                cout << "Exiting..." << endl; 
                cout << endl;
                break;
            }
            default: {
                cout << endl;
                cout << "Invalid Input. Try Again." << endl;
                cout << endl;
            }
        }
    } while (input != 7);

return 0;
}
