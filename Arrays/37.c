#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//37 Пусть первые K элементов массива уже упорядочены  по неубыванию. Берется (K+1)-й элемент и размещается среди первых K элементов так, чтобы упорядоченными оказались уже K+1 первых элементов. Этот метод применяется при изменении K от 1 до n-1.



int* sort(int amount, int *massiveful)//функция для сортировки
{
	for (int i = 1; i < amount; i++)
	{
		for (int j = i; j > 0 && *(massiveful + j - 1) > *(massiveful + j); j--)
		{
			int swap = *(massiveful + j - 1);
			*(massiveful + j - 1) = *(massiveful + j);
			*(massiveful + j) = swap;
		}
	}
	return massiveful;
}

void print(int* massive, int amount)
{
	for (int i = 0; i < amount; i++)
	{
		printf("%d ", *(massive + i));
	}
}

int main()
{
	int amount = 0;
	
	int add = 0;

	printf("Enter values");
	scanf_s("%d", &amount);

	int* massiveful;

	massiveful = (int*)calloc(amount, sizeof(int));

	for (int i = 0; i < amount; i++)
	{
		scanf_s("%d", massiveful + i);
	}

	massiveful = sort(amount, massiveful);
	
	printf("Elements to add");
	scanf_s("%d", &add);
	
	amount = amount + 1;

	*(massiveful+ amount - 1) = add;//добавление элемента в конец


	massiveful = sort(amount, massiveful);
	

	print(massiveful, amount);
	

}