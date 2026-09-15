#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *head = NULL;

void insertNodeBeginning()
{
	struct node *newnode,*t;
	newnode = (struct node *) malloc(sizeof(struct node));
	if (newnode==NULL)
	{
		printf("OVERFLOW");
		return;
	}
	
	printf("Enter the number: ");
	scanf("%d", &newnode -> info);
	newnode-> link= NULL;

	newnode-> link= head;
	head = newnode;

	printf("\n Node Inserted ");
}

void insertNodeEnd()
{
	struct node *newnode,*t;
	newnode = (struct node *) malloc(sizeof(struct node));
	if (newnode==NULL)
	{
		printf("OVERFLOW");
		return;
	}
	
	printf("Enter the number");
	scanf("%d", &newnode -> info);
	newnode -> link = NULL;

	if (head == NULL)
	{
	head= newnode;
	}
	else
	{
		t= head;
		while(t->link!= NULL)
		{
		    t = t -> link;
		}
	    t ->link = newnode;
	}

}

void traverse()
{
	struct node *v;

	if (head == NULL)
	{
 		printf("\n list is empty");
	}
	else
	{
		v= head;
		printf("LInked LIst elements are:   ");
		while(v != NULL)
		{
		printf("%d ", v->info);
		v = v -> link;
		}
	}
		printf("\n\n");
}

int menu ()
{
	int ch;
	printf("\n 1.Add value in the list at beginning");
	printf("\n 2.Add value in the list at end");
	printf("\n 3.View List");
	printf("\n 4.Exit ");
	printf("\n\n Enter your choice:  ");
	scanf("%d",&ch);
	return(ch);
}

int main()
{
	while(1)
	{
		switch(menu())
		{
			case 1: insertNodeBeginning();
                    traverse();
					break;
			case 2: insertNodeEnd();
                    traverse();
					break;
			case 3: traverse();
                	break;
			case 4: exit(0);
			default:
				printf("invalid entry");
		}

	}
	return 0;

}
