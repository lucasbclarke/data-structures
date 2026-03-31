#include <stdio.h>

void insert(int arr[], int *size, int element, int position) {
    for (int i = *size; i > position; i--) {
	arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int element = 25;
    int position = 2;

    insert(arr, &size, element, position);

    for (int i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }


    return 0;
}
