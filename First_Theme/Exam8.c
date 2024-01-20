#include <stdio.h>

int main() {
    int batura[5];
    printf("Enter 5 numbers");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &batura[i]);
    }

    int best = batura[0];
    for (int i = 1; i < 5; i++) {
        int a = batura[i], b = best;
        while (b != 0) {
            int prepod = b;
            b = a % b;
            a = prepod;
        }
        best = a;
        if (best == 1) {
            break;
        }
    }
    printf("largest common divisor: %d", best);
    return 0;
}