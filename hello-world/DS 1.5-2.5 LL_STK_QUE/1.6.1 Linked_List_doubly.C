#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *plink;
    struct node *nlink;

};
struct node *head = NULL;

struct node *createNode()
{
	struct node *n;
    n = (struct node *) malloc(sizeof(struct node));

if (n==NULL)
{
		printf("OVERFLOW");
		return(n);

}
else
{
return(n);
}
}

void insertNodeEnd()
{
struct node *temp,*t;
temp = createNode();
printf("Enter the number ");
scanf("%d", &temp-> info);


if (head == NULL)
{
	head= temp;
	temp->plink = NULL;
	temp->nlink = NULL;
}
else
{
	t= head;
	while(t->nlink!= NULL)
{
t = t -> nlink;
}
t ->nlink = temp;
temp->plink =t;
temp->nlink = NULL;
}
}

void insertNodeBeginning()
{
struct node *temp,*t;
temp = createNode();
printf("Enter the number ");
scanf("%d", &temp -> info);

if (head == NULL)
{
	head= temp;
	temp->plink = NULL;
	temp->nlink = NULL;
}
else
{   head->plink = temp;
	temp->plink = NULL;
	temp->nlink= head;
	head = temp;

}
}

void insertNodeBefore()
{
int number;
struct node *temp,*t,*p;
temp = createNode();

printf("Enter the number ");
scanf("%d", &temp -> info);
printf("Enter the number before node is to be inserted ");
scanf("%d", &number);

if (head == NULL)
{
	head= temp;
	temp->plink = NULL;
	temp->nlink = NULL;
}

else
{
	t= head;
	while(t->info!= number)
	{       p=t;
		t = t -> nlink;
	}
	temp ->plink = p;
	temp->nlink =t;
	p ->nlink =temp;
	t ->plink =temp;
}
}

void insertNodeAfter()
{
int number;
struct node *temp,*t,*c;
temp = createNode();

printf("Enter the number ");
scanf("%d", &temp -> info);
printf("Enter the number after node is to be inserted ");
scanf("%d", &number);
if (head == NULL)
{
	head= temp;
	temp->plink = NULL;
	temp->nlink = NULL;
}

else
{
	t= head;
	while(t->info!= number)
	{
		t = t -> nlink;
	}
	t ->nlink->plink =temp;
	// or
	//c = t ->nlink;
	//c ->plink = temp;
	temp->plink = t;
	temp ->nlink = t->nlink;
	t ->nlink =temp;

}
}

void deleteNodeFirst()
{
	struct node *d;
	if(head == NULL)
	{
        printf("list is empty");
    }
    else
    {
        d = head;
        head = head->nlink;
        head->plink = NULL;

        free(d);
    }
}


void deleteNodeLast()
{
	struct node *t,*p;
	if(head == NULL)
	{
        printf("list is empty");
    }
    else
    {
        t = head;
        while(t->nlink!= NULL)
        {
            t = t->nlink;
        }
        p= t->plink;
        p ->nlink = NULL;
        free(t);
    }
}

void deleteNodeParticular()
{
	int number;
	struct node *t,*p,*n;
	printf("Enter the number node to be deleted ");
    scanf("%d", &number);

	if(head == NULL)
	{
        printf("list is empty");
    }
    else
{
    t = head;
    while(t->info!= number && t->nlink!= NULL)
    {
        t = t ->nlink;
    }
     if (t->info== number)
        {
            // t->plink->nlink = t->nlink;
            // t->nlink->plink = t->plink;
            p= t->plink;
            n= t->nlink;
            p ->nlink = t ->nlink;
            n->plink = t->plink;
            free(t);
        }
        else
            printf("Number can't be deleted as given number not found \n");

	}

    }

void viewListFromStart()
{
    struct node *v;

    if (head == NULL)
    {
        printf("\n list is empty \n");
    }
else
    {
    	printf("\n List: ");
        v= head;
        while(v!= NULL)
        {
            printf("%d ", v->info);
            v = v -> nlink;
        }
    }
    printf("\n");
}

void viewListFromEnd()
{
    struct node *v;

    if (head == NULL)
    {
     printf("\n list is empty");
    }
    else
    {
    	printf("\n Reverse List: ");
        v= head;
        while(v->nlink != NULL)
        {
             v = v -> nlink;
        }
        while(v->plink != NULL)
        {
            printf("%d ", v->info);
            v = v->plink;
        }
        printf("%d ", v->info);
    }
    printf("\n");
}


int menu ()
{
int ch;
printf("\n 1 Add value in the list in end");
printf("\n 2 Add value in the list in beginning");
printf("\n 3 Add value in the list before the given number");
printf("\n 4 Add value in the list after the given number");
printf("\n 5 Delete first element");
printf("\n 6 Delete last element");
printf("\n 7 Delete particular element");
printf("\n 8 Traverse from start");
printf("\n 9 Traverse from end");
printf("\n 10 exit ");
printf("\n\nEnter your choice ");
scanf("%d",&ch);
return(ch);
}

int main()
{
while(1)
{

switch(menu())
{
	case 1: insertNodeEnd();
            viewListFromStart();
		break;
	case 2: insertNodeBeginning();
	        viewListFromStart();
		break;
	case 3: insertNodeBefore();
	        viewListFromStart();
		break;
	case 4: insertNodeAfter();
	        viewListFromStart();
		break;
	case 5: deleteNodeFirst();
	        viewListFromStart();
		break;
	case 6: deleteNodeLast();
	        viewListFromStart();
		break;
	case 7: deleteNodeParticular();
	        viewListFromStart();
		break;
	case 8: viewListFromStart();

		break;
	case 9: viewListFromEnd();
		break;
	case 10: exit(0);
	default:
		printf("invalid entry");
}
}
return 0;
}
