#include <stdio.h>

#define SIZE 7

int main() {
    int matrix[SIZE][SIZE] = {0};
    int counter = 1;
    int lineStart = 0, columnStart = 0;
    int lineEnd = SIZE, columnEnd = SIZE;

    while (lineStart < lineEnd && columnStart < columnEnd) {
        for (int i = columnStart; i < columnEnd; ++i)
            matrix[lineStart][i] = counter++;
        lineStart++;

        for (int i = lineStart; i < lineEnd; ++i)
            matrix[i][columnEnd - 1] = counter++;
        columnEnd--;

        if (lineStart < lineEnd) {
            for (int i = columnEnd - 1; i >= columnStart; --i)
                matrix[lineEnd - 1][i] = counter++;
            lineEnd--;
        }

        if (columnStart < columnEnd) {
            for (int i = lineEnd - 1; i >= lineStart; --i)
                matrix[i][columnStart] = counter++;
            columnStart++;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%2d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}
