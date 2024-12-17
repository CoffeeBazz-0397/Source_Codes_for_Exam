#include <iostream>
using namespace std;

// Structure to represent a node in the queue
struct Node {
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Class to represent a queue using linked list
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to enqueue an element to the queue
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) {
            front = rear = newNode;
            cout << "Element " << data << " enqueued to the queue." << endl;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        cout << "Element " << data << " enqueued to the queue." << endl;
    }

    // Function to dequeue an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue an element." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        cout << "Element " << temp->data << " dequeued from the queue." << endl;
        delete temp;
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;
    int choice, data,n;

    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout << "Enter the number of elements to enqueue into the queue: ";
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cout << "Enter element " << i + 1 << ": ";
                cin >> data;
                queue.enqueue(data);
             }
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting..." << endl<<endl<<endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl<<endl<<endl;
        }
    }
}
