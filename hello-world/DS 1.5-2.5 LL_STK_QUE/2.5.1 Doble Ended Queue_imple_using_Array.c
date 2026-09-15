#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

// Function to insert element at front
void insertFront(int data) {
    if (front == (rear + 1) % MAX) {
        printf("\nOverflow! Deque is full.\n");
        return;
    }

    if (front == -1) {  // Empty deque
        front = rear = 0;
    } else {
        front = (front - 1 + MAX) % MAX;
    }

    deque[front] = data;
    printf("\nInserted %d at front.\n", data);
}

// Function to insert element at rear
void insertRear(int data) {
    if (front == (rear + 1) % MAX) {
        printf("\nOverflow! Deque is full.\n");
        return;
    }

    if (rear == -1) {  // Empty deque
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }

    deque[rear] = data;
    printf("\nInserted %d at rear.\n", data);
}

// Function to delete element from front
void deleteFront() {
    if (front == -1) {
        printf("\nUnderflow! Deque is empty.\n");
        return;
    }

    printf("\nDeleted %d from front.\n", deque[front]);

    if (front == rear) {  // Only one element
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

// Function to delete element from rear
void deleteRear() {
    if (rear == -1) {
        printf("\nUnderflow! Deque is empty.\n");
        return;
    }

    printf("\nDeleted %d from rear.\n", deque[rear]);

    if (front == rear) {  // Only one element
        front = rear = -1;
    } else {
        rear = (rear - 1 + MAX) % MAX;
    }
}

// Function to display deque elements
void display() {
    if (front == -1) {
        printf("\nDeque is empty.\n");
        return;
    }

    printf("\nDeque elements: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, data;

    while (1) {
        printf("\n*** DEQUE MENU ***\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertFront(data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertRear(data);
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}

