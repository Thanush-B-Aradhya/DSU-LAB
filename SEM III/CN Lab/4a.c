#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct Stack {
    int arr[MAX];
    int top;
};

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

void push(struct Stack *s, int item) {
    if (isFull(s))
        printf("Stack is full. Push not possible.\n");
     else 
        s->arr[++(s->top)] = item;
}

int pop(struct Stack *s) {
    if (isEmpty(s)) 
    {
        printf("Stack is empty. Popping not possible.\n");
        return -1;
    }
    else 
        return s->arr[(s->top)--];
}

void displayStack(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);

    displayStack(&stack);

    printf("popped %d\n", pop(&stack));
    printf("popped %d\n", pop(&stack));
    
    displayStack(&stack);

    return 0;
}

