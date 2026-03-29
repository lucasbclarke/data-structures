#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;
    head->next = second;

    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    third->data = 30;
    third->next = NULL;
    second->next = third;

    struct Node* temp = head;
    while (temp != NULL) {
	printf("%d -> ", temp->data);
	temp = temp->next;
    }
    printf("NULL\n");

    return 0;

}
