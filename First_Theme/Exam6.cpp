/*6.	Определить число полученное выписыванием цифр заданного числа в обратном порядке.*/

#include <stdio.h>
#include <locale.h>

int reverseNumber(int num) 
{
    int reverse = 0;
    int isNegative = 0;

    if (num < 0) 
    {
        isNegative = 1;
        num = -num;
    }

    while (num > 0) 
    {
        int digit = num % 10; 
        reverse = reverse * 10 + digit;  
        num /= 10;
    }

    if (isNegative == 1) 
        reverse = -reverse;

    return reverse;
}

int main() 
{
    setlocale(LC_ALL, "Ru");
    int num;
    printf("Введите число: ");
    scanf_s("%d", &num);
    int reversedNum = reverseNumber(num);
    printf("Полученное число: %d\n", reversedNum);
    return 0;
}
