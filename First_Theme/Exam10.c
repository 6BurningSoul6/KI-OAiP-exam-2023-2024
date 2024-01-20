#include <stdio.h>

int main() {
    int num;
    printf("Enter num");
    scanf("%d", &num);

    int batura[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *krutoi[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (num >= batura[i]) {
            printf("%s", krutoi[i]);
            num -= batura[i];
        }
    }

    return 0;
}