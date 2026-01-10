#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Constructor
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

   
    bool isEmpty() {
        return front == -1;
    }

    
    bool isFull() {
        return (rear + 1) % size == front;
    }


    void push(int data) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

       
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = data;
    }

  
    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

 
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

  
    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.getFront() << endl; // 10

    q.pop();
    cout << q.getFront() << endl; // 20

    q.push(50);
    q.push(60); // Will fill circularly

    return 0;
}
