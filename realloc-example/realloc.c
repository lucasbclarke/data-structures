#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
	ptr[i] = i * 10;
    }

    ptr = (int*) realloc(ptr, 10 * sizeof(int));

    for (int i = 5; i < 10; i++) {
	ptr[i] = i * 10;
    }

    for (int i = 0; i < 10; i++) {
	printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
