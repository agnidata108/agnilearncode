#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *prev,*link;
};
struct node *head=NULL;

struct node *createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("OVERFLOW\n");
        return NULL;
    }
    return n;
}

void insertBeginning()
{
    struct node *newnode;
    newnode=createNode();
    if(newnode==NULL) return;
    printf("Enter the number: ");
    scanf("%d",&newnode->info);
    newnode->prev=NULL;
    newnode->link=head;
    if(head!=NULL)
        head->prev=newnode;
    head=newnode;
    printf("Element inserted.\n");
}

void insertEnd()
{
    struct node *newnode,*t;
    newnode=createNode();
    if(newnode==NULL) return;
    printf("Enter the number: ");
    scanf("%d",&newnode->info);
    newnode->link=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
        return;
    }
    t=head;
    while(t->link!=NULL)
        t=t->link;
    t->link=newnode;
    newnode->prev=t;
    printf("Element inserted.\n");
}

void deleteFirst()
{
    struct node *d;
    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    d=head;
    head=head->link;
    if(head!=NULL)
        head->prev=NULL;
    free(d);
    printf("First element deleted.\n");
}

void deleteLast()
{
    struct node *t;
    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    t=head;
    while(t->link!=NULL)
        t=t->link;
    if(t->prev!=NULL)
        t->prev->link=NULL;
    else
        head=NULL;
    free(t);
    printf("Last element deleted.\n");
}

void traverse()
{
    struct node *t;
    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    t=head;
    printf("Doubly Linked List: ");
    while(t!=NULL)
    {
        printf("%d",t->info);
        if(t->link!=NULL)
            printf(" <--> ");
        t=t->link;
    }
    printf("\n");
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert at End");
        printf("\n3. Delete First");
        printf("\n4. Delete Last");
        printf("\n5. Traverse and Display");
        printf("\n0. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insertBeginning(); break;
            case 2: insertEnd(); break;
            case 3: deleteFirst(); break;
            case 4: deleteLast(); break;
            case 5: traverse(); break;
            case 0: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
