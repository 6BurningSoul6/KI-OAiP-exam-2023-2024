#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//34Дано число N целого типа. Определить, симметрично ли оно, т.е. одинаковые цифры – и слева и справа: 12321. Записать 3 последние цифры в одномерный массив.

int main()
{

	int k = 0;
	int reverse = 0;
	int count = 0;
	int i = 0;
	int buf = 0;
	int j = 0;

	int reversed[MAX_SIZE];
	int massive[MAX_SIZE];

	scanf_s("%d", &k);

	buf = k;

	while (buf > 0)//занесение числа в массив
	{
		massive[count] = buf % 10;
		buf /= 10;
		count++;
	}


	for (int i = 0; i < count; i++)//проверка, чтобы число было палиндромом
	{
		if (massive[count - 1 - i] == massive[i])
		{
			printf("Right");
		}
		else

			return 0;
	}

	printf("\n");

	for (i = 0; i < 3; i++)//занесение последних 3 чисел в массив
	{
		reversed[i] = k % 10;
		k /= 10;
	}

	for (i = 2; i >= 0; i--)
		printf("%d", reversed[i]);

}
	

