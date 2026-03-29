#include <stdio.h>

int main() {
    char string[] = "Hello";

    for (int i = 0; string[i] != '\0'; i++) {
	printf("%d: %c\n", i, string[i]);
    }
}
