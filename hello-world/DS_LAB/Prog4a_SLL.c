#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *head = NULL;

struct node *createNode()
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("\nMemory allocation failed - OVERFLOW\n");
        return NULL;
    }

    return n;
}

void insertNodeBeginning()
{
    struct node *newnode;

    newnode = createNode();

    if (newnode == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &newnode->info);

    newnode->link = head;
    head = newnode;

    printf("\nElement inserted successfully.\n");
}

void insertNodeEnd()
{
    struct node *newnode, *t;

    newnode = createNode();

    if (newnode == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &newnode->info);

    newnode->link = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        t = head;

        while (t->link != NULL)
        {
            t = t->link;
        }

        t->link = newnode;
    }

    printf("\nElement inserted successfully.\n");
}

void deleteNodeFirst()
{
    struct node *d;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }

    d = head;
    head = head->link;

    free(d);

    printf("\nFirst element deleted successfully.\n");
}

void deleteNodeLast()
{
    struct node *t, *p;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }

    /* If there is only one node */
    if (head->link == NULL)
    {
        free(head);
        head = NULL;

        printf("\nLast element deleted successfully.\n");
        return;
    }

    t = head;

    while (t->link != NULL)
    {
        p = t;
        t = t->link;
    }

    p->link = NULL;
    free(t);

    printf("\nLast element deleted successfully.\n");
}

void traverse()
{
    struct node *v;
    if (head == NULL)
    {
        printf("\nList is empty.\n");
        return;
    }
    v = head;
    printf("\nLinked List elements are:\n");

    while (v != NULL)
    {
        printf("%d", v->info);
        if (v->link != NULL)
            printf(" --> ");
        v = v->link;
    }
    printf("\n");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n========================================");
        printf("\n      SINGLY LINKED LIST MENU");
        printf("\n========================================");
        printf("\n1. Insert value at First place");
        printf("\n2. Insert value at Last place");
        printf("\n3. Delete First Value");
        printf("\n4. Delete Last Value");
        printf("\n5. Traverse and Display");
        printf("\n0. Exit");
        printf("\n========================================");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insertNodeBeginning();
                break;

            case 2:
                insertNodeEnd();
                break;

            case 3:
                deleteNodeFirst();
                break;

            case 4:
                deleteNodeLast();
                break;

            case 5:
                traverse();
                break;

            case 0:
                printf("\nExiting program...\n");
                exit(0);

            default:
                printf("\nInvalid choice! Please try again (0/1/2/3/4/5).\n");
        }
    }

    return 0;
}
