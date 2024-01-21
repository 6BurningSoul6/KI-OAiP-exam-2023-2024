//120. Ввести строку из n (n≤6) знаков и строку из k (k≤80) знаков.
// Определить количество вхождений строки из n знаков в строку из k знаков.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countOccurrences(char* stringK, char* stringN) {   
    int count = 0;

    if (strlen(stringN) > strlen(stringK)) {
        return 0;
    }

    char* p = stringK;
    while (*p != '\0') {
        if (strncmp(p, stringN, strlen(stringN)) == 0) {
            count++;
        }
        p++;
    }

    return count;
}

int main() {
    printf("input a string of 80 or less symbols: ");
    char* stringK = (char*)malloc(81 * sizeof(char));
    fgets(stringK, 81, stdin);
    *(stringK + strlen(stringK) - 1) = '\0';


    printf("input a string up to 6 symbols: ");
    char* stringN = (char*)malloc(7 * sizeof(char));
    fgets(stringN, 7, stdin);
    *(stringN + strlen(stringN) - 1) = '\0';

    int occurrences = countOccurrences(stringK, stringN);
    printf("occurrence count: %d\n", occurrences);

    free(stringK);
    free(stringN);

    return 0;
}
