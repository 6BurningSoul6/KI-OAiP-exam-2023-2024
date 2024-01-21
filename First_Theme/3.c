//3. Вычислить сумму чисел Фибоначчи (1,1,2,3,5,8,12,…), которые не превосходят заданного (введенного) числа n.
#include <stdio.h>

int main()
{

    int num1 = 1, num2 = 1/*, next = 0*/;
    int max;

    printf("enter max fibonacci num: ");
    scanf("%d", &max);

    printf("\nlimited to %d fibonacci sequence: %d, %d, ", max, num1, num2);

    for (int next = 0; next <= max; next = num1 + num2)
    {
        num1 = num2;
        num2 = next;
        printf("%d, ", next);
    }
    return 0;
}
