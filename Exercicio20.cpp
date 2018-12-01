#include "pch.h"
#include <iostream>

void funcaoneg(int matriz[2][2], int i, int j)
{
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matriz[i][j] = abs(matriz[i][j]);
		}
	}
	printf("Matriz positiva \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%i", matriz[i][j]);
		}
		printf(" \n");
	}

}

int main()
{
	int i, j;
	int matriz[2][2];

	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matriz[i][j] = ((-i * 2) + (-j * 2));
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%i", matriz[i][j]);
		}
		printf(" \n");
	}

	funcaoneg(matriz, i, j);

	system("pause");
	return 0;

}