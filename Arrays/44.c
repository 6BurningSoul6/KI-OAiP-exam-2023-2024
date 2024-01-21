//44.	 Дана вещественная матрица размером 3 x 4. Упорядочить ее строки по неубыванию наибольших элементов в строках матрицы.
#include <stdio.h>
#include <stdlib.h>

float** allocAndInput(float** matrix);

float max(float* line);

void sortMatrix(float** matrix, float max1, float max2, float max3);

void output(float** matrix);

int main()
{
    float** matrix = NULL;
    float max1, max2, max3;
    matrix = allocAndInput(matrix);

    max1 = max(*matrix);
    max2 = max(*(matrix + 1));
    max3 = max(*(matrix + 2));

    sortMatrix(matrix, max1, max2, max3);

    output(matrix);

    for (int row = 0; row < 3; row++)
    {
        free(*(matrix + row));
    }
    free(matrix);

    return 0;
}

float** allocAndInput(float** matrix)
{
    matrix = (float**)malloc(3 * sizeof(float*));
    for (int row = 0; row < 3; row++)
        *(matrix + row) = (float*)malloc(4 * sizeof(float));

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            printf("input number [%d][%d]  ", row + 1, col + 1);
            scanf("%f", *(matrix + row) + col);
        }
    }
    return matrix;
}

float max(float* line)
{
    float maximum = *line;
    for(int el = 0; el < 4; ++el)
    {
        if (*(line + el) > maximum)
            maximum = *(line + el);
    }
    return maximum;
}

void sortMatrix(float** matrix, float max1, float max2, float max3)
{
    if (max1 > max2)
    {
        float* temp = *matrix;
        *matrix = *(matrix + 1);
        *(matrix + 1) = temp;
    }

    if (max1 > max3)
    {
        float* temp = *(matrix + 1);
        *(matrix + 1) = *(matrix + 2);
        *(matrix + 2) = temp;
    }

    if (max2 > max3)
    {
        float* temp = *matrix;
        *matrix = *(matrix + 1);
        *(matrix + 1) = temp;
    }
}

void output(float** matrix)
{
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%4.1f ", *(*(matrix + row) + col));
        }
        printf("\n");
    }
}
