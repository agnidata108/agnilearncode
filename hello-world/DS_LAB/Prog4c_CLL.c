#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
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
    struct node *newnode,*t;
    newnode=createNode();
    if(newnode==NULL) return;
    printf("Enter the number: ");
    scanf("%d",&newnode->info);
    if(head==NULL)
    {
        head=newnode;
        newnode->link=head;
    }
    else
    {
        t=head;
        while(t->link!=head)
            t=t->link;
        newnode->link=head;
        t->link=newnode;
        head=newnode;
    }
    printf("Element inserted.\n");
}

void insertEnd()
{
    struct node *newnode,*t;
    newnode=createNode();
    if(newnode==NULL) return;
    printf("Enter the number: ");
    scanf("%d",&newnode->info);
    if(head==NULL)
    {
        head=newnode;
        newnode->link=head;
    }
    else
    {
        t=head;
        while(t->link!=head)
            t=t->link;
        t->link=newnode;
        newnode->link=head;
    }
    printf("Element inserted.\n");
}

void deleteFirst()
{
    struct node *d,*t;
    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if(head->link==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        d=head;
        t=head;
        while(t->link!=head)
            t=t->link;
        head=head->link;
        t->link=head;
        free(d);
    }
    printf("First element deleted.\n");
}

void deleteLast()
{
    struct node *t,*p;
    if(head==NULL)
    {
        printf("List is empty.\n");
        return;
    }
    if(head->link==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        t=head;
        while(t->link!=head)
        {
            p=t;
            t=t->link;
        }
        p->link=head;
        free(t);
    }
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
    printf("Circular Linked List: ");
    do
    {
        printf("%d",t->info);
        t=t->link;
        if(t!=head)
            printf(" --> ");
    }while(t!=head);
    printf(" --> HEAD\n");
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