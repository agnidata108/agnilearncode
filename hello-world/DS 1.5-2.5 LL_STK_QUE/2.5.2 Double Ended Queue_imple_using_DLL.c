#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Insert at Front
void insertFront(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = front;

    if (front == NULL) {  // Empty deque
        rear = newNode;
    } else {
        front->prev = newNode;
    }
    front = newNode;
    printf("\nInserted %d at front\n", data);
}

// Insert at Rear
void insertRear(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = rear;

    if (rear == NULL) {  // Empty deque
        front = newNode;
    } else {
        rear->next = newNode;
    }
    rear = newNode;
    printf("\nInserted %d at rear\n", data);
}

// Delete from Front
void deleteFront() {
    if (front == NULL) {
        printf("\nUnderflow! Deque is empty.\n");
        return;
    }

    struct Node* temp = front;
    int data = temp->data;

    if (front == rear) {  // Only one element
        front = rear = NULL;
    } else {
        front = front->next;
        front->prev = NULL;
    }

    free(temp);
    printf("\nDeleted %d from front\n", data);
}

// Delete from Rear
void deleteRear() {
    if (rear == NULL) {
        printf("\nUnderflow! Deque is empty.\n");
        return;
    }

    struct Node* temp = rear;
    int data = temp->data;

    if (front == rear) {  // Only one element
        front = rear = NULL;
    } else {
        rear = rear->prev;
        rear->next = NULL;
    }

    free(temp);
    printf("\nDeleted %d from rear\n", data);
}

// Display Deque
void display() {
    if (front == NULL) {
        printf("\nDeque is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("\nDeque elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main Menu
int main() {
    int choice, data;

    while (1) {
        printf("\n*** DEQUE (Doubly Linked List) MENU ***\n");
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

