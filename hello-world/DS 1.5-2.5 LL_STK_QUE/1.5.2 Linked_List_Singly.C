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

void insertNodeBeginning()
{
	struct node *newnode,*t;
	newnode = createNode();
	printf("Enter the number: ");
	scanf("%d", &newnode -> info);
	newnode -> link = NULL;	

	if (head == NULL)
	{
		head= newnode;
	}
	else
	{
		newnode-> link= head;
		head = newnode;
	}
	printf("\n Element Inserted \n ");
}
void insertNodeEnd()
{
	struct node *newnode,*t;
	newnode = createNode();
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

void insertNodeSpecificPosition()
{
	int pos,i;
	struct node *newnode,*t;
	newnode = createNode();

	printf("Enter the number ");
	scanf("%d", &newnode -> info);
	printf("Enter the position where value to be inserted (position starts form 1)");
	scanf("%d", &pos);
	newnode -> link = NULL;

	if (pos == 1)
	{
		newnode -> link = head;
		head = newnode;
		
	}
	else
	{
		t= head;
		for(i=1;i< pos-1 && t->link!= NULL;i++)
		{
			t = t -> link;
		}
		
        newnode ->link = t->link;
        t ->link =newnode;

	}
}

void insertNodeBefore()
{
	int number;
	int flag=0;
	struct node *newnode,*t,*p;
	newnode = createNode();

	printf("Enter the number ");
	scanf("%d", &newnode -> info);
	printf("Enter the number before node is to be inserted:  ");
	scanf("%d", &number);

	if (head == NULL)
	{
		printf("Number can't be inserted as linked list is empty");
	}
	else
	{
		t= head;

		while(t->info!= number && t->link!= NULL)
		{
			p=t;
			t = t -> link;

        }
        if (t->info== number)
            {
                flag++;
                newnode ->link = p->link;
                p ->link =newnode;
            }
        else
            printf("Number can't be inserted as given number not found \n");

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
		head = head->link;
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
		while(t->link!= NULL)
		{
			p = t;
			t = t -> link;
		}
		p ->link = NULL;
		free(t);
	}
}

void deleteNodeSpecificPosition()
{
    int pos, i;
    struct node *t, *p;

    printf("Enter the position to be deleted: ");
    scanf("%d", &pos);

    if (head == NULL)
    {
        printf("List is empty, cannot delete\n");
        return;
    }

    if (pos == 1)
    {
        t = head;
        head = head->link;
        free(t);
        printf("Node at position 1 deleted\n");
        return;
    }

    p = head;
    for (i = 1; i < pos-1 && p != NULL; i++)
    {
        p = p->link;
    }

    if (p == NULL || p->link == NULL)
    {
        printf("Invalid position, cannot delete\n");
        return;
    }

    t = p->link;
    p->link = t->link;
    free(t);
    printf("Node at position %d deleted\n", pos);
}

void deleteNodeParticular()
{
	int number;
	struct node *t,*p;
	printf("Enter the number node to be deleted ");
	scanf("%d", &number);

	if (head == NULL)
	{
		printf("Number can't be deleted as linked list is empty");
	}
	else
	{
		t= head;

		while(t->info!= number && t->link!= NULL)
		{
			p=t;
			t = t -> link;

        }
        if (t->info== number)
            {
                p ->link = t ->link;
                free(t);
            }
        else
            printf("Number can't be deleted as given number not found \n");

	}
}

void deleteNodeBefore()
{
	int number;
	struct node *newnode,*t,*p,*s;
	newnode = createNode();

	printf("Enter the number before node is to be deleted:  ");
	scanf("%d", &number);

	if (head == NULL)
	{
		printf("Number can't be deleted as linked list is empty");
	}
	else
	{
		t= head;

		while(t->info!= number && t->link!= NULL)
		{   s=p;
			p=t;
			t = t -> link;

        }
        if (t->info== number)
            {
                s ->link = p->link;
                free(p);
            }
        else
            printf("Number can't be inserted as given number not found \n");

	}
}


void search()
{
	int number,flag=1;
	struct node *newnode,*t;
	printf("Enter the number to search ");
	scanf("%d", &number);

	if (head == NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		t= head;
		while(t->info!= number && t->link!= NULL)
		{   flag++;
			t = t -> link;
		}
		 if (t->info== number)
            {
                printf("Number is at position: %d \n", flag);
            }
        else
            printf("Number can't be inserted as given number not found \n");
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
		printf("Linked List elements are:   ");
		while(v != NULL)
		{
		printf("%d --> ", v->info);
		v = v -> link;
		}
	}
		printf("\n\n");
}



int menu ()
{
	int ch;
	printf("\n 1.Insert value at First place in Linked List");
	printf("\n 2.Insert value at Last place in Linked List");
	printf("\n 3 Insert value at Specific Position in Linked List");
	printf("\n 4 Insert value Before the Given Number in Linked List");
	printf("\n 5 Delete First Value in Linked List");
	printf("\n 6 Delete Last Value in Linked List");
	printf("\n 7 Delete value at Specific Position in Linked List");
	printf("\n 8 Delete particular element");
	printf("\n 9 Delete before element");
    printf("\n 10 Search");
	printf("\n 11 Traverse");
	printf("\n 12 exit ");
	printf("\n\nEnter your choice:  ");
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
			case 3: insertNodeSpecificPosition();
                    traverse();
				break;
			case 4: insertNodeBefore();
                    traverse();
				break;
			case 5: deleteNodeFirst();
			        traverse();
				break;
			case 6: deleteNodeLast();
                    traverse();
				break;
			case 7: deleteNodeSpecificPosition();
			        traverse();
				break;
            case 8: deleteNodeParticular();
                    traverse();
				break;
            case 9: deleteNodeBefore();
                    traverse();
				break;
			case 10: search();
				break;
			case 11: traverse();
			    break;
			case 12: exit(0);

			default:
				printf("invalid entry");
		}

	}
	return 0;

}
