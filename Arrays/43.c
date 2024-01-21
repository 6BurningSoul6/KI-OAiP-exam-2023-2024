//43. Дана вещественная матрица размером 7 x 4. Переставляя ее строки и столбцы, добиться того,
//чтобы наибольший элемент (один из них) оказался в верхнем левом углу.
#include <stdio.h>
#include <stdlib.h>

float** allocAndInput(float** matrix);

void swapCols(float** matrix, int col);

void swapRows(float** matrix, int row);

void output(float** matrix);

int main()
{
    float** matrix = NULL;
    int maxElRow = 0, maxElCol = 0;
    float maxEl;

    matrix = allocAndInput(matrix);

    maxEl = **matrix;
    for (int row = 0; row < 7; ++row)
    {
        for (int col = 0; col < 4; ++col)
        {
            if(*(*(matrix + row) + col) > maxEl)
            {
                maxEl = *(*(matrix + row) + col);
                maxElRow = row;
                maxElCol = col;
            }
        }
    }

    swapCols(matrix, maxElCol);
    swapRows(matrix, maxElRow);

    output(matrix);
    
    return 0;
}

float** allocAndInput(float** matrix)
{
    matrix = (float**)malloc(7 * sizeof(float*));
    for (int row = 0; row < 7; row++)
        *(matrix + row) = (float*)malloc(4 * sizeof(float));

    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("input number [%d][%d]  ", row + 1, col + 1);
            scanf("%f", *(matrix + row) + col);
        }
    }
    return matrix;
}

void swapCols(float** matrix, int col)
{
    for(int row = 0; row < 7; row++)
    {
        float temp = *(*(matrix + row) + col);
        *(*(matrix + row) + col) = **(matrix + row);
        **(matrix + row) = temp;
    }
}

void swapRows(float** matrix, int row)
{
    float* temp = *(matrix + row);
    *(matrix + row) = *matrix;
    *matrix = temp;
}

void output(float** matrix)
{
    for (int row = 0; row < 7; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%4.1f ", *(*(matrix + row) + col));
        }
        printf("\n");
    }
    printf("\n\n");
}
