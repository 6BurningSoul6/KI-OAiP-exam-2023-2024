#include <stdio.h>
#include <stdlib.h>
int main()
{
    char** massive, *various_mass;
	int n, m, now_element_in_various_mass = 0, flag = 0, count = 0;
	scanf_s("%d%d", &n, &m);
	massive = (char**)malloc(n * sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		massive[i] = (char*)malloc((m + 1) * sizeof(char));
	}
	for (int i = 0; i < n; i++)
	{
		rewind(stdin);
		fgets(massive[i], m + 1, stdin);
	}
	various_mass = (char*)malloc(1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int i_new = 0; i_new < n && flag == 0; i_new++)
			{
				for (int j_new = 0; j_new < m && flag == 0; j_new++)
				{
					if (massive[i][j] == massive[i_new][j_new] && i != i_new)
					{
						printf("%c[%d][%d]\n", massive[i][j], i, j);
						flag++;
						various_mass = (char*)realloc(various_mass, now_element_in_various_mass + 1);
						various_mass[now_element_in_various_mass] = massive[i][j];
						now_element_in_various_mass++;
					}
				}
			}
			flag = 0;
		}
	}
	for (int i = 0; i <= now_element_in_various_mass; i++)
	{
		for (int j = i; j <= now_element_in_various_mass; j++)
		{
			if (various_mass[i] == various_mass[j] && i != j && various_mass[j] != NULL)
			{
				count++;
				while (j <= now_element_in_various_mass)
				{
					if (various_mass[i] == various_mass[j])
					{
						various_mass[j] = NULL;
					}
					j++;
				}
			}
		}
	}
	printf("%d", count);

	
	for (int i = 0; i < n; i++)
	{
		free(massive[i]);
		massive[i] = NULL;
	}
	free(massive);
	free(various_mass);
	return 0;
}