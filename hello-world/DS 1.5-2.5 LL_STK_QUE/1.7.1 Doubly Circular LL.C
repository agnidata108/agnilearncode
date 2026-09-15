#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;


/* Create a new node */
struct node *createNode()
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("\nOVERFLOW\n");
        return NULL;
    }

    return n;
}


/* Insert node at the end */
void insertNodeEnd()
{
    struct node *temp, *t;

    temp = createNode();

    if (temp == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &temp->info);

    if (head == NULL)
    {
        head = temp;

        temp->prev = temp;
        temp->next = temp;
    }
    else
    {
        t = head;

        while (t->next != head)
        {
            t = t->next;
        }

        temp->next = head;
        temp->prev = t;

        t->next = temp;
        head->prev = temp;
    }
}


/* Insert node at the beginning */
void insertNodeBeginning()
{
    struct node *temp, *last;

    temp = createNode();

    if (temp == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &temp->info);

    if (head == NULL)
    {
        head = temp;

        temp->prev = temp;
        temp->next = temp;
    }
    else
    {
        last = head->prev;

        temp->next = head;
        temp->prev = last;

        last->next = temp;
        head->prev = temp;

        head = temp;
    }
}


/* Insert node before a given number */
void insertNodeBefore()
{
    int number;
    struct node *temp, *t, *p;

    temp = createNode();

    if (temp == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &temp->info);

    printf("Enter the number before which node is to be inserted: ");
    scanf("%d", &number);

    if (head == NULL)
    {
        printf("\nList is empty. Node will be inserted as first node.\n");

        head = temp;

        temp->prev = temp;
        temp->next = temp;
    }
    else
    {
        t = head;

        /* Search the given number */
        do
        {
            if (t->info == number)
                break;

            t = t->next;

        } while (t != head);

        /* Number not found */
        if (t == head && t->info != number)
        {
            printf("\nNumber not found.\n");
            free(temp);
            return;
        }

        /* Insert before first node */
        if (t == head)
        {
            p = head->prev;

            temp->next = head;
            temp->prev = p;

            p->next = temp;
            head->prev = temp;

            head = temp;
        }
        else
        {
            p = t->prev;

            temp->next = t;
            temp->prev = p;

            p->next = temp;
            t->prev = temp;
        }
    }
}


/* Insert node after a given number */
void insertNodeAfter()
{
    int number;
    struct node *temp, *t, *c;

    temp = createNode();

    if (temp == NULL)
        return;

    printf("Enter the number: ");
    scanf("%d", &temp->info);

    printf("Enter the number after which node is to be inserted: ");
    scanf("%d", &number);

    if (head == NULL)
    {
        printf("\nList is empty. Node will be inserted as first node.\n");

        head = temp;

        temp->prev = temp;
        temp->next = temp;
    }
    else
    {
        t = head;

        /* Search the given number */
        do
        {
            if (t->info == number)
                break;

            t = t->next;

        } while (t != head);

        /* Number not found */
        if (t == head && t->info != number)
        {
            printf("\nNumber not found.\n");
            free(temp);
            return;
        }

        c = t->next;

        temp->prev = t;
        temp->next = c;

        t->next = temp;
        c->prev = temp;
    }
}


/* Delete first node */
void deleteNodeFirst()
{
    struct node *d, *last;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        d = head;

        /* Only one node */
        if (head->next == head)
        {
            head = NULL;
            free(d);
        }
        else
        {
            last = head->prev;

            head = head->next;

            head->prev = last;
            last->next = head;

            free(d);
        }
    }
}


/* Delete last node */
void deleteNodeLast()
{
    struct node *t, *p;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        /* Only one node */
        if (head->next == head)
        {
            free(head);
            head = NULL;
        }
        else
        {
            t = head->prev;
            p = t->prev;

            p->next = head;
            head->prev = p;

            free(t);
        }
    }
}


/* Delete a particular node */
void deleteNodeParticular()
{
    int number;
    struct node *t, *p, *n;

    printf("Enter the number of node to be deleted: ");
    scanf("%d", &number);

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        t = head;

        /* Search the node */
        do
        {
            if (t->info == number)
                break;

            t = t->next;

        } while (t != head);

        /* Number not found */
        if (t == head && t->info != number)
        {
            printf("\nNumber can't be deleted as given number not found.\n");
        }
        else
        {
            /* Only one node */
            if (t->next == t)
            {
                head = NULL;
                free(t);
            }
            else
            {
                p = t->prev;
                n = t->next;

                p->next = n;
                n->prev = p;

                /* If first node is deleted */
                if (t == head)
                {
                    head = n;
                }

                free(t);
            }
        }
    }
}


/* Traverse from beginning */
void viewListFromStart()
{
    struct node *v;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        v = head;

        printf("\nList from head: ");

        printf("%d ", v->info);

        v = v->next;

        while (v != head)
        {
            printf("%d ", v->info);
            v = v->next;
        }

        printf("\n");
    }
}


/* Traverse from end */
void viewListFromEnd()
{
    struct node *v;

    if (head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        v = head->prev;

        printf("\nList from end: ");

        /* Print last node first */
        printf("%d ", v->info);

        v = v->prev;

        while (v != head->prev)
        {
            printf("%d ", v->info);
            v = v->prev;
        }

        printf("\n");
    }
}

/* Main function */
int main()
{
	int ch;
    while (1)
    {
    	

	    printf("\n\n========== CIRCULAR DOUBLY LINKED LIST ==========\n");
		    printf("\n1. Add value in the list at end");
	    printf("\n2. Add value in the list at beginning");
	    printf("\n3. Add value before the given number");
	    printf("\n4. Add value after the given number");
	    printf("\n5. Delete first element");
	    printf("\n6. Delete last element");
	    printf("\n7. Delete particular element");
	    printf("\n8. Traverse from head");
	    printf("\n9. Traverse from end");
	    printf("\n10. Exit");
	
	    printf("\n\nEnter your choice: ");
	    scanf("%d", &ch);
	    
        switch (ch)
        {
            case 1:
                insertNodeEnd();
                viewListFromStart();
                break;

            case 2:
                insertNodeBeginning();
                viewListFromStart();
                break;

            case 3:
                insertNodeBefore();
                viewListFromStart();
                break;

            case 4:
                insertNodeAfter();
                viewListFromStart();
                break;

            case 5:
                deleteNodeFirst();
                viewListFromStart();
                break;

            case 6:
                deleteNodeLast();
                viewListFromStart();
                break;

            case 7:
                deleteNodeParticular();
                viewListFromStart();
                break;

            case 8:
                viewListFromStart();
                break;

            case 9:
                viewListFromEnd();
                break;

            case 10:
                printf("\nProgram terminated.\n");
                exit(0);

            default:
                printf("\nInvalid entry.\n");
        }
    }

    return 0;
}
