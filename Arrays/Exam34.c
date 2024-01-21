#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, size = 0;
    int *array = (int *) calloc(1, sizeof(int));
    scanf_s("%d", &n);
    while (n != 0) {
        size++;
        array = (int *) realloc(array, size * sizeof(int));
        array[size - 1] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < size / 2; i++) {
        if (array[i] != array[size - 1 - i]) {
            printf("NO\n");
            break;
        } else {
            printf("YES\n");
            break;
        }
    }
    array = (int *) realloc(array, 3 * sizeof(int));
    int temp = array[0];
    array[0] = array[2];
    array[2] = temp;
    for (int i = 0; i < 3; i++) {
        printf("%d", array[i]);
    }
    return 0;
}
