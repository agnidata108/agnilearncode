#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

// Check if queue is empty
int isEmpty() {
    return (front == NULL);
}

// Enqueue operation
void enqueue(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Overflow! Memory not available.\n");
        return;
    }
    newNode->data = value;
    if (front == NULL) { // first node
        front = rear = newNode;
        rear->next = front;
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    printf("Inserted %d successfully.\n", value);
}

// Dequeue operation
int dequeue() {
    if (isEmpty()) {
        printf("Underflow! Queue is empty.\n");
        return -1;
    }
    int data;
    if (front == rear) { // only one node
        data = front->data;
        free(front);
        front = rear = NULL;
    } else {
        struct Node* temp = front;
        data = temp->data;
        front = front->next;
        rear->next = front;
        free(temp);
    }
    printf("Deleted element: %d\n", data);
    return data;
}

// Peek front element
int peek() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return -1;
    }
    printf("Front element: %d\n", front->data);
    return front->data;
}

// Display queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    peek();
    display();
    return 0;
}

