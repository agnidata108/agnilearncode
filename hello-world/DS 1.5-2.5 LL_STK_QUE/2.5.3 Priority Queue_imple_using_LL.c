#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* front = NULL;

// Function to insert an element into the priority queue
void insert(int data, int p) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->priority = p;
    newNode->next = NULL;

    struct Node* temp = front;
    struct Node* t = NULL;  // Previous node

    // Traverse to find the correct position
    while (temp != NULL && temp->priority <= p) {
        t = temp;
        temp = temp->next;
    }

    if (t == NULL) {
        // Insert at front
        newNode->next = front;
        front = newNode;
    } else {
        // Insert after previous node t
        newNode->next = t->next;
        t->next = newNode;
    }

    printf("\nInserted %d with priority %d\n", data, p);
}

// Function to delete the highest priority element
void delete() {
    if (front == NULL) {
        printf("\nUnderflow! Priority Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    int data = temp->data;
    front = front->next;
    free(temp);

    printf("\nDeleted %d from priority queue\n", data);
}

// Function to peek at the highest priority element
void peek() {
    if (front == NULL) {
        printf("\nPriority Queue is empty.\n");
        return;
    }

    printf("\nFront element: %d with priority %d\n", front->data, front->priority);
}

// Function to display all elements in the queue
void display() {
    if (front == NULL) {
        printf("\nPriority Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("\nPriority Queue elements:\n");
    while (temp != NULL) {
        printf("Data: %d  Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

// Main menu
int main() {
    int choice, data, p;

    while (1) {
        printf("\n*** PRIORITY QUEUE (Linked List) MENU ***\n");
        printf("1. Insert\n");
        printf("2. Delete (Highest Priority)\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority (smaller number = higher priority): ");
                scanf("%d", &p);
                insert(data, p);
                break;

            case 2:
                delete();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}

