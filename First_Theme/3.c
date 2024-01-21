//3. Вычислить сумму чисел Фибоначчи (1,1,2,3,5,8,12,…), которые не превосходят заданного (введенного) числа n.
#include <stdio.h>

int main()
{

    int num1 = 1, num2 = 1;
    int max;
    int sum = num1 + num2;

    printf("enter max fibonacci num: ");
    scanf("%d", &max);

    for (int next = sum; next <= max; next = num1 + num2)
    {
        num1 = num2;
        num2 = next;
        sum += next;
    }
    printf("sum of the fibonacci sequence limited to %d is %d", max, sum);
    return 0;
}
