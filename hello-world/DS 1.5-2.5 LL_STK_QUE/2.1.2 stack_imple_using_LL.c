#include <stdio.h>
#include <stdlib.h>

// Define structure
struct lifo {
    int info;
    struct lifo *next;
};
typedef struct lifo stack;

stack *top = NULL;  // initially stack is empty

// Function to check if stack is empty
int isempty() {
    if(top == NULL)
    return 1;
    else
    return 0;
}

// Push operation
void push() {
	
    stack *newNode = (stack*)malloc(sizeof(stack));
    if (newNode ==NULL) {
        printf("Heap overflow\n");
        return;
    }
    else
    {
    	printf("Enter the number ");
	    scanf("%d", &newNode -> info);
    	newNode->next = top;   // link new node with old top
   		top = newNode;         // update top
    	printf("%d pushed to stack\n", newNode -> info);
	}

}

// Pop operation
int pop() {
    if (isempty()) {
        printf("Stack Underflow (empty stack)\n");
        return -1;  // return error code
    }
    else
    {
    int popped = top->info;
    stack *temp = top;
    top = top->next;   // move top to next node
    free(temp);        // free memory of old top
    printf("%d popped from stack\n", popped);
	}

}

// Peek operation (to see top element without popping)
int peek() {
    if (isempty()) {
        printf("Stack is empty\n");
        return -1;
    }
    else
    printf("Peek Value is %d \n",top->info);
}

// Display operation
void display() {
    if (isempty()) {
        printf("Stack is empty\n");
        return;
    }
    stack *ptr = top;
    printf("Stack elements (Top to Bottom): ");
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}

// Main function to test
int main() {
	int choice;
    printf("\n\t STACK OPERATIONS USING LL");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.EXIT");

    while (1) {
        printf("\n Enter the Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
            default:
                printf("\n\t Please Enter a Valid Choice (1/2/3/4/5)");
        }
    }
    return 0;
}