#include <stdio.h>
#define MAX 5

struct Stack {
    int arr[MAX];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

void push(struct Stack* stack, int value) {
    if (stack->top == MAX - 1) {
	printf("Stack overflow!\n");
    } else {
	stack->arr[++(stack->top)] = value;
    }
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
	printf("Stack underflow!\n");
	return -1;
    } else {
	return stack->arr[(stack->top) --];
    }
}

int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    return 0;
}
