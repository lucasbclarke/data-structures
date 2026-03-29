#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5

int findHighestGrade(int grades[], int size) {
    int highest = grades[0];

    for (int i = 1; i < size; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

void sortGrades(int grades[], int size){
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (grades[j] > grades[j+1]) {
                int temp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = temp;
            }
        }
    }
}


int main() {
    int grades[MAX_STUDENTS] = {85, 90, 88, 92, 76};

    printf("Original grades:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%d ", grades[i]);
    }
    printf("\n");

    int highest = findHighestGrade(grades, MAX_STUDENTS);
    printf("Highest Grade: %d\n", highest);

    sortGrades(grades, MAX_STUDENTS);
    printf("Sorted Grades:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%d ", grades[i]);
    }

    printf("\n");

    return 0;
}
