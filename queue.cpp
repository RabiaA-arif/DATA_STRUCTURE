#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Queue class using linked list
class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor
    Queue() {
        front = rear = nullptr;
    }

    // Destructor to free memory
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr;
    }

    // Enqueue operation (Insert at rear)
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
		 // If queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << value << endl;
    }

    // Dequeue operation (Remove from front)
    int dequeue() {
        if (front == nullptr) { // Queue underflow condition
            cout << "Queue is empty, cannot dequeue!" << endl;
            return -1;
        }

        Node* temp = front;
        int data = temp->data;
        front = front->next;

        if (front == nullptr) { // If queue becomes empty
            rear = nullptr;
        }

        delete temp; // Free memory
        cout << "Dequeued: " << data << endl;
        return data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Display the queue elements
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test queue operations
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  // Output: 10 -> 20 -> 30 -> NULL

    q.dequeue();  // Output: Dequeued: 10
    q.display();  // Output: 20 -> 30 -> NULL

    q.enqueue(40);
    q.enqueue(50);
    q.display();  // Output: 20 -> 30 -> 40 -> 50 -> NULL

    q.dequeue();  // Output: Dequeued: 20
    q.display();  // Output: 30 -> 40 -> 50 -> NULL

    return 0;
}
