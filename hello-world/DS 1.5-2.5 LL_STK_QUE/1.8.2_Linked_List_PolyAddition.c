#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coe;
    int exp;
    struct node *next;
};

struct node *poly1 = NULL;
struct node *poly2 = NULL;
struct node *resultPoly = NULL;


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


struct node *add(struct node *poly1, struct node *poly2)
{
    struct node *temp1;
    struct node *temp2;
    struct node *newnode;
    struct node *temp;

    temp1 = poly1;
    temp2 = poly2;

    resultPoly = NULL;
    temp = NULL;

    while (temp1 != NULL || temp2 != NULL)
    {
        newnode = createNode();

        if (temp1 == NULL)
        {
            newnode->coe = temp2->coe;
            newnode->exp = temp2->exp;

            temp2 = temp2->next;
        }
        else if (temp2 == NULL)
        {
            newnode->coe = temp1->coe;
            newnode->exp = temp1->exp;

            temp1 = temp1->next;
        }
        else if (temp1->exp == temp2->exp)
        {
            newnode->coe = temp1->coe + temp2->coe;
            newnode->exp = temp1->exp;

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->exp > temp2->exp)
        {
            newnode->coe = temp1->coe;
            newnode->exp = temp1->exp;

            temp1 = temp1->next;
        }
        else
        {
            newnode->coe = temp2->coe;
            newnode->exp = temp2->exp;

            temp2 = temp2->next;
        }

        newnode->next = NULL;

        if (resultPoly == NULL)
        {
            resultPoly = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    return resultPoly;
}


int main()
{
    printf("ADDITION OF TWO POLYNOMIALS\n");

    printf("Enter the number of terms in First Polynomial: ");
    poly1 = polyRepresentation(poly1);

    printf("Enter the number of terms in Second Polynomial: ");
    poly2 = polyRepresentation(poly2);

    printf("First Polynomial:  ");
    Traverse(poly1);

    printf("Second Polynomial: ");
    Traverse(poly2);

    resultPoly = add(poly1, poly2);

    printf("Result Polynomial: ");
    Traverse(resultPoly);

    return 0;
}