#include <stdio.h>
#define MAX 5

struct Queue {
    int arr[MAX];
    int front;
    int rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

void enqueue (struct Queue* q, int value) {
    if (q->rear == MAX - 1) {
	printf("Queue overflow!\n");
    } else {
	if (q->front == -1) {
	    q->front = 0;
	}
	q->arr[++(q->rear)] = value;
    }
}

int dequeue(struct Queue* q) {
    if (q->front == -1) {
	printf("Queue underflow!\n");
	return -1;
    } else {
	return q->arr[(q->front)++];
    }
}

int main() {
    struct Queue queue;
    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    return 0;
}
