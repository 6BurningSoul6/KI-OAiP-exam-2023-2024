#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//36 ����������� �������� ������� x �� ���������� (�.�. ����������� ��� �������� ���, ����� ��� ���� K ����������� xk<xk+1), ��������� �������� ������������ (����������) ���������

int main()
{
	int amount = 0;

	printf("Enter values");
	scanf_s("%d", &amount);

	int* massiveful = NULL;
	massiveful = (int*)calloc(amount, sizeof(int));

	for (int i = 0; i < amount; i++)
	{
		scanf_s("%d", massiveful + i);
	}

	for (int i = 1; i < amount; i++)//���������� ��������
	{
		for (int j = i; j > 0 && *(massiveful + j - 1) > *(massiveful + j); j--)
		{
			int swap = *(massiveful + j - 1);
			*(massiveful + j - 1) = *(massiveful + j);
			*(massiveful + j) = swap;
		}
	}

	for (int i = 0; i < amount; i++)
	{
		printf("%d", *(massiveful + i));
	}

}
