#include <stdio.h>
#include <stdlib.h>

int *insertZero(int *arr, int *size) {
    int *newArr = (int *) malloc(sizeof(int) * (*size * 2));
    int j = 0;

    for (int i = 0; i < *size; i++) {
        newArr[j++] = arr[i];
        if (arr[i] % 2 != 0) {
            newArr[j++] = 0;
        }
    }

    *size = j;
    free(arr);
    return newArr;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int *arr = (int *) malloc(sizeof(int) * size);

    // Заполнение массива
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    printArray(arr, size);

    arr = insertZero(arr, &size);

    printArray(arr, size);

    free(arr);
    return 0;
}
