#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, dist = 1, maxdist = dist, first_elem = 0, end_elem = 0;
    int *array = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", array + i);
    }
    for (int i = 0; i < n - 1; i++) {
        int j = i - 1;
        for (; j < n && sum == 0;) {
            j++;
            sum += array[j];
            dist++;
        }
        if (maxdist < dist) {
            maxdist = dist;
            first_elem = i;
            end_elem = j - 1;
        }
        dist = 1;
        sum = 0;
    }
    printf("%d - %d", first_elem, end_elem);
    return 0;
}
