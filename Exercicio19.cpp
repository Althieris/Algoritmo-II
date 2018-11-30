#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>

using namespace std;

int main()
{
	int matriz[3][3];
	int i, j, linha, coluna, valor;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] = i * 2 + j * 3;
			printf("%i | ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Escolha a linha que deseja alterar. \n");
	cin >> linha;

	printf("Digite o valor que deseja multiplicar pela linha escolhida. \n");
	cin >> valor;

	for (i = 0; i < linha; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] = matriz[i][j] * valor;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i | ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("Escolha a coluna que deseja alterar. \n");
	cin >> coluna;

	printf("Digite o valor que deseja multiplicar pela coluna escolhida. \n");
	cin >> valor;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < coluna; j++)
		{
			matriz[i][j] = matriz[i][j] * valor;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i | ", matriz[i][j]);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}