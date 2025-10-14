#include <stdio.h>
#include <stdlib.h>

#define MAX 4

struct Stack {
    int arr[MAX];
    int top;
};

int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

int isFull(struct Stack* stack) {
    return (stack->top == MAX - 1);
}

void push(struct Stack* stack, int data) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push %d\n", data);
        return;
    }
    stack->arr[++stack->top] = data;
    printf("%d pushed to the stack\n", data);
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    stack.top = -1;

    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Check if Stack is Empty\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                printStack(&stack);
                break;

            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("%d popped from the stack\n", value);
                }
                printStack(&stack);
                break;

            case 3:
                if (isEmpty(&stack)) {
                    printf("The stack is empty.\n");
                } else {
                    printf("The stack is not empty.\n");
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

