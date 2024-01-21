//Ввести N и последовательность B[N] из целых чисел. Определить начальный и конечный номера элементов заданного массива, 
//составляющих максимальную по длине последовательность, значения элементов которой равны нулю.
#include <stdio.h>
#include <stdlib.h>

int* allocAndFill(int* sequence, int length);

void findLongestZeroSequence(int* sequence, int length, int* start, int* end);

int main()
{
    int N;
    int* B = NULL;

    printf("Enter the length of the sequence: ");
    scanf("%d", &N);

    B = allocAndFill(B, N);

    int start, end;
    findLongestZeroSequence(B, N, &start, &end);

    if (start == -1 && end == -1) {
        printf("No zero sequences found.\n");
    } else {
        printf("The longest zero sequence starts at index %d and ends at index %d.\n", start, end);
    }

    free(B);

    return 0;
}

int* allocAndFill(int* sequence, int length)
{
    sequence = (int*)malloc(length * sizeof(int));

    int maxNumber;
    printf("Enter the maximum value for the random sequence: ");
    scanf("%d", &maxNumber);

    printf("Randomly generated sequence:\n");
    for (int i = 0; i < length; i++) {
        *(sequence + i) = rand() % (maxNumber + 1); // Generate a random number between 0 and maxNumber (inclusive)
        printf("%d ", *(sequence + i));
    }
    printf("\n");
    return sequence;
}

void findLongestZeroSequence(int* sequence, int length, int* start, int* end)
{
    int maxStart = -1;
    int maxEnd = -1;
    int currentStart = -1;
    int currentEnd = -1;
    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i < length; i++) {
        if (sequence[i] == 0) {
            if (currentStart == -1) {
                currentStart = i;
            }
            currentEnd = i;
            currentLength = currentEnd - currentStart + 1;

            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
                maxEnd = currentEnd;
            }
        } else {
            currentStart = -1;
            currentEnd = -1;
            currentLength = 0;
        }
    }

    *start = maxStart;
    *end = maxEnd;
}
