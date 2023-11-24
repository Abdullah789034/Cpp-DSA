#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        if (top != NULL) {
            newNode->next = top;
            top->prev = newNode;
        }
        top = newNode;
    }

    void pop() {
        if (top != NULL) {
            Node* temp = top;
            top = top->next;
            if (top != NULL) {
                top->prev = NULL;
            }
        }
    }

    int peek() {
        if (top != NULL) {
            return top->data;
        }
        cerr << "Error: Stack is empty." << endl;
        return -1;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear != NULL) {
            newNode->prev = rear;
            rear->next = newNode;
        }
        rear = newNode;
        if (front == NULL) {
            front = rear;
        }
    }

    void dequeue() {
        if (front != NULL) {
            Node* temp = front;
            front = front->next;
            if (front != NULL) {
                front->prev = NULL;
            } else {
                rear = NULL;
            }
        }
    }

    int peek() {
        if (front != NULL) {
            return front->data;
        }
        cerr << "Error: Queue is empty." << endl;
        return -1;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top of the stack: " << stack.peek() << endl;

    stack.pop();
    cout << "Top of the stack after pop: " << stack.peek() << endl;

    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    cout << "Front of the queue: " << queue.peek() << endl;

    queue.dequeue();
    cout << "Front of the queue after dequeue: " << queue.peek() << endl;

    return 0;
}
