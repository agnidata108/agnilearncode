#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int choice, top = -1, data, i;

void push(void);
void pop(void);
void display(void);
int isempty();
int isfull();
void peek();

int main() {
    printf("\n Size of STACK is 10");
    printf("\n\t STACK OPERATIONS USING ARRAY");
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

// Check if stack is empty
int isempty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

// Check if stack is full
int isfull() {
    if (top >= MAX - 1)
        return 1;
    else
        return 0;
}

// Peek function (look at top element)
void peek() {
    if (!isempty())
        printf("\n Peek Value is %d", stack[top]);
    else
        printf("\n Stack is empty");
}

// Push operation
void push() {
    if (!isfull()) {
        printf(" Enter a value to be pushed: ");
        scanf("%d", &data);
        top = top + 1;
        stack[top] = data;
        printf(" %d pushed into stack", data);
    } else {
        printf("\n Could not insert data, Stack is full.");
    }
}

// Pop operation
void pop() {
    if (isempty()) {
        printf("\n Stack is underflow (empty)");
    } else {
        printf("\n The popped element is %d", stack[top]);
        top--;
    }
}

// Display operation
void display() {
    if (isempty()) {
        printf("\n Stack is empty");
    } else {
        printf("\n Stack elements are: ");
        for (i = top; i >= 0; i--) {
            printf("\n %d", stack[i]);
        }
    }
}