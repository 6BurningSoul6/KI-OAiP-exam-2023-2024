#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//113 Используя указатель рассортировать массив строк в алфавитном порядке.



int main()
{
	int linesnum = 0;
	int colsum = 0;

	printf("lines number");
	scanf_s("%d", &linesnum);

	printf("lines number");
	scanf_s("%d", &colsum);

	char** cmass = (char**)calloc(linesnum, sizeof(char*));

	for (int i = 0; i < linesnum; i++)
	{
		*(cmass + i) = (char*)calloc(colsum, sizeof(char));
	}

		for (int i = 0; i < linesnum; i++)//заполнение массива
		{
			rewind(stdin);
			fgets(*(cmass + i), colsum, stdin);
		}
		
		for (int i = 0; i < linesnum; i++)//сортировка
		{
			for (int j = i + 1; j < linesnum; j++)
			{
				if (strcmp(*(cmass + i), *(cmass + j)) > 0)
				{
					char* tmp = *(cmass + i);
					*(cmass + i) = *(cmass + j);
					*(cmass + j) = tmp;
				}
			}
		}


		for (int i = 0; i < linesnum; i++)
		{
			printf("%s ", *(cmass + i));
		}
}