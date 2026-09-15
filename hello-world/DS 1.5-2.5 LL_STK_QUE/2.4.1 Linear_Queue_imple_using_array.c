#include <stdio.h>
#include <stdlib.h>

#define MAX 5   // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to check if queue is full
int isFull() {
	if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

// Function to check if queue is empty
int isEmpty() {
	if (front == -1)
        return 1;
    else
        return 0;
}

// Function to insert (enqueue) an element
void enqueue(int data) {
    printf("\n--- Enqueue Operation ---\n");
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d\n", data);
        return;
    }
    if (front == -1 && rear == -1) { // First element
        front = rear = 0;
    } else {
        rear = rear + 1;
    }
    queue[rear] = data;
    printf("Inserted %d successfully.\n", data);
}

// Function to delete (dequeue) an element
int dequeue() {
    printf("\n--- Dequeue Operation ---\n");
    if (isEmpty()) {
        printf("Queue Underflow! Nothing to delete.\n");
        return -1;
    }
    int data = queue[front];
    if (front == rear) {  // Queue has only one element
        front = rear = -1;
    } else {
        front = front + 1;
    }
    printf("Deleted element: %d\n", data);
    return data;
}

// Function to peek at the front element
int peek() {
    if (isEmpty()) {
        printf("Queue is Empty! No element to peek.\n");
        return -1;
    }
    printf("Front element: %d\n", queue[front]);
    return queue[front];
}

// Function to display the queue elements
void display() {
	int i;
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n=== QUEUE MENU ===\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Check if Full\n");
        printf("5. Check if Empty\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                if (isFull())
                    printf("Queue is FULL.\n");
                else
                    printf("Queue is NOT full.\n");
                break;
            case 5:
                if (isEmpty())
                    printf("Queue is EMPTY.\n");
                else
                    printf("Queue is NOT empty.\n");
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

