#include "Header.h"
#include <stdarg.h>
#include <string.h>

#define MAX_SIZE 12345

//33 Элементы заданного массива X циклически сдвинуть на K позиций вправо (влево).

int main()
{
	int k =0;
	int high_num = 0;
	int sdvig = 0;


	scanf_s("%d", &k);

	int* massive = (int*)calloc(k, sizeof(int));
	for (int i = 0; i < k; i++)
	{
		scanf_s("%d", massive + i);
	}

	printf("sdvig ");

	scanf_s("%d", &sdvig);

	int tmp = *(massive + k - sdvig);//занесение в переменную первого сдвинутого элемента
	
	 for(int i = k-2; i > 0; i--)
	 {
		 *(massive + i) = *(massive + i - sdvig);
	 }
	 *(massive + 0) = tmp;


	for (int i = 0; i < k; i++)
	{
		printf("%d ", *(massive + i));
	}

}