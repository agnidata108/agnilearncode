#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *front = NULL, *rear = NULL;

// Check if queue is empty
int isEmpty() {
    if (front == NULL)
        return 1;
    else
        return 0;
}

// Enqueue operation
void enqueue(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Overflow! Memory not available.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted %d successfully.\n", value);
}

// Dequeue operation
int dequeue() {
    if (isEmpty()) {
        printf("Underflow! Queue is empty.\n");
        return -1;
    }
    struct Node* temp = front;
    int data = temp->data;
    front = front->next;
    if (front == NULL) rear = NULL;
    free(temp);
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
    
	while (temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    if (isEmpty()) 
	{  printf("Queue is empty.\n");  }
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    peek();
    display();
    return 0;
}

