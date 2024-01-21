#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if ((n + 1) % 2 != 0) {
        return 0;
    }
    int **matrix = (int **) calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++) {
        *(matrix + i) = (int *) calloc(n, sizeof(int));
    }
    int k = 0;
    int str = (n) / 2;
    int col = (n) / 2;
    int dist = 1;
    int num = 1;
    while (num != n * n) {
        switch (k) {
            case 0 : {//вправо
                dist++;
                num--;
                int i = 0;
                for (; dist - i >= 1 && num != n * n; ++i) {
                    num++;
                    matrix[str][col + i] = num;
                }
                col += i - 1;


                if (num == n * n) {
                    break;
                }
            }
            case 1 : {//вниз
                num--;
                int i = 0;
                for (; dist - i >= 1 && num != n * n; i++) {
                    num++;
                    matrix[str + i][col] = num;
                }
                str += i - 1;
                if (num == n * n) {
                    break;
                }
            }
            case 2 : {//влево
                dist++;
                num--;
                int i = 0;
                for (; dist - i >= 1 && num != n * n; i++) {
                    num++;
                    matrix[str][col - i] = num;
                }
                col -= i - 1;
                if (num == n * n) {
                    break;
                }
            }
            case 3 : {//вверх
                num--;
                int i = 0;
                for (; dist - i >= 1 && num != n * n; i++) {
                    num++;
                    matrix[str - i][col] = num;
                }
                str -= i - 1;
                if (num == n * n) {
                    break;
                }
            }
        }
    }
    int flag = 0;
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (k = 2; k * k <= matrix[i][j]; k++) {
                if (matrix[i][j] % k == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                printf("   ");
            } else {
                printf("  *");
            }
            flag = 0;
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
