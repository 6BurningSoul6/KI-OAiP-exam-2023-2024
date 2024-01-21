#include <stdio.h>

int main() {
    int A[3][4];
    int B[4];
    int result[3] = {0};

    printf("Enter matrix values\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter vector values :\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            result[i] += A[i][j] * B[j];
        }
    }

    printf("result:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}