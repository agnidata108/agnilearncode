#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertion() {
    int value;
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    printf("Node inserted.\n");
}

void deletion() {
    struct Node *temp;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    head = head->next;

    free(temp);
    printf("Node deleted.\n");
}

void traversal() {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void display() {
    traversal();
}

int main() {
    int choice;

    do {
        printf("\n--- Singly Linked List ---\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Traversal\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertion(); break;
            case 2: deletion(); break;
            case 3: traversal(); break;
            case 4: display(); break;
            case 5: printf("Exit\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}