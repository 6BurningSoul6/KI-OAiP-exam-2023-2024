#include "Header.h"
#include <stdarg.h>
#include <string.h>
#define MAX_SIZE 1234 

//35 ���������� t ��������� �������� 1 ��� 0 � ����������� �� ����, ���� ��� ��� ����� ��������� ������� X ���� �� ���� ����� ���������. ����� ���������  (fn)  ������������  ��������

int main()
{
	int k = 0;
	int sum = 0;
	int i1 = 0;
	int i2 = 1;
	int amount = 0;
	int massive[MAX_SIZE];
	int count = 0;
	int t = 0;

	printf("enter number of elements");
	scanf_s("%d", &amount);

	printf("repeat until k =");
	scanf_s("%d", &k);

	while (sum < k)//���������� ����� ���������
	{

		sum = i1 + i2;
		i1 = i2;
		i2 = sum;
		massive[count] = sum;
		count++;
	}

	int* massiveful = NULL;

	massiveful = (int*)calloc(amount, sizeof(int));
		
	for (int i = 0; i < amount; i++)//���������� ������
	{
		scanf_s("%d", massiveful + i);
	}

		for (int i = 0; i < count; i++)//��������, ����� ������ �������� �����
		{
			for (int j = 0; j < amount; j++)
			{
				if (massive[i] == *(massiveful + j))
				{
					t = 1;
				}
			
			}
		}

		printf("%d", t);

}

