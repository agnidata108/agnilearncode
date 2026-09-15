#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coe;
    int exp;
    struct node *next;
};

struct node *poly1 = NULL;

struct node *createNode()
{
    struct node *n;

    n = (struct node *)malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("OVERFLOW");
        return n;
    }
    else
    {
        return n;
    }
}


struct node *polyRepresentation(struct node *poly)
{
    struct node *newnode;
    struct node *temp;
    struct node *d;
    int i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = createNode();

        printf("\nEnter the coefficient of term %d: ", i + 1);
        scanf("%f", &newnode->coe);

        printf("\nEnter the exponent of term %d: ", i + 1);
        scanf("%d", &newnode->exp);

        if (poly == NULL || poly->exp < newnode->exp)
        {
            newnode->next = poly;
            poly = newnode;
        }
        else
        {
            temp = poly;

            while (temp->exp > newnode->exp && temp->next != NULL)
            {
                d = temp;
                temp = temp->next;
            }

            if (temp->exp < newnode->exp)
            {
                newnode->next = temp;
                d->next = newnode;
            }
            else
            {
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }

    printf("\n\n");

    return poly;
}


void Traverse(struct node *poly)
{
    struct node *temp;

    temp = poly;

    while (temp != NULL)
    {
        printf("%.2fx^%d", temp->coe, temp->exp);

        temp = temp->next;

        if (temp != NULL)
        {
            printf(" + ");
        }
    }

    printf("\n");
}

int main()
{
    printf("Enter the number of terms in First Polynomial: ");
    poly1 = polyRepresentation(poly1);

    printf("First Polynomial:  ");
    Traverse(poly1);


    return 0;
}