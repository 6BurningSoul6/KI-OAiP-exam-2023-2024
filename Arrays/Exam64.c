#include <stdio.h>

#define SIZE 10

int main() {
    int B[SIZE];
    int start = 0, end = 0;
    int maxStart = 0, maxEnd = 0;

    printf("Enter %d elements of array B: ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 1; i < SIZE; i++) {
        if (B[i] >= B[i - 1]) {
            end = i;
            if (end - start > maxEnd - maxStart) {
                maxStart = start;
                maxEnd = end;
            }
        } else {
            start = i;
            end = i;
        }
    }

    printf("Array B: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Longest: ");
    for (int i = maxStart; i <= maxEnd; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}