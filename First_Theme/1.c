//1.	Ввести целые числа N и M. Определить являются ли они взаимно простыми, то есть не имеют общих делителей.
#include <stdio.h>

int compare(int a, int b)
{
    while (a!=0 && b!=0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;
}

int main()
{
    int n, m;
    printf("input nums n and m\n");
    scanf("%d%d", &n, &m);

    if (compare(n, m) == 1)
        printf("nums are mutually simple");
    else
        printf("no");

    return 0;
}
