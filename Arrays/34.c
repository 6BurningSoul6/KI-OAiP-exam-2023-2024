#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//34���� ����� N ������ ����. ����������, ����������� �� ���, �.�. ���������� ����� � � ����� � ������: 12321. �������� 3 ��������� ����� � ���������� ������.

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

	while (buf > 0)//��������� ����� � ������
	{
		massive[count] = buf % 10;
		buf /= 10;
		count++;
	}


	for (int i = 0; i < count; i++)//��������, ����� ����� ���� �����������
	{
		if (massive[count - 1 - i] == massive[i])
		{
			printf("Right");
		}
		else

			return 0;
	}

	printf("\n");

	for (i = 0; i < 3; i++)//��������� ��������� 3 ����� � ������
	{
		reversed[i] = k % 10;
		k /= 10;
	}

	for (i = 2; i >= 0; i--)
		printf("%d", reversed[i]);

}
	

