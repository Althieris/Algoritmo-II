#include "pch.h"
#include <iostream>

int main()
{
	int matriz[3][3];
	int i, j;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite o valor da linha %i Coluna %i: ", i + 1, j + 1);
			scanf_s("%i", &matriz[i][j]);
		}
	}
	
	printf("Matriz \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%i | ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("Matriz Transposta \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%i | ", matriz[j][i]);
			}
			printf("\n");
		}

		system("Pause");
		return 0;
}

