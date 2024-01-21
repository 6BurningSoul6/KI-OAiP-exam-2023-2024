#include <stdio.h>

#define Size 5

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A[Size][Size];
    int i, j;

    // Заполнение матрицы
    for (i = 0; i < Size; i++) {
        for (j = 0; j < Size; j++) {
            A[i][j] = i * Size + j;
        }
    }

    // Обмен элементов
    for (i = 0; i < Size; i++) {
        swap(&A[i][i], &A[i][0]);
    }

    // Вывод матрицы
    for (i = 0; i < Size; i++) {
        for (j = 0; j < Size; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}