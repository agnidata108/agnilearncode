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
 struct Node *ptr;
void display() {
   
    ptr =head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    
}

int main() {
    int choice;

    do {
        printf("\n Singly Linked List");
        printf("1. Insertion\n");
      printf("2. display\n");
    

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertion(); break;
            case 2: display(); break;
            case 3: printf("Exit\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
