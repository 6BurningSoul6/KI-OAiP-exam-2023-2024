#include <stdio.h>
int main()
{
    int n, k, count = 0;
    printf("Enter number value 'n', number system w/ base 'k' \n");
    scanf_s("%d%d", &n, &k);
    while (n > 0)
    {
        n /= k;
        count++;
    }
    printf("%d", count);
}