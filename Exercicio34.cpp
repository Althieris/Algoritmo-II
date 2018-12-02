#include "pch.h"
#include <iostream>

int main()
{
	int num = 0;
	int i;
	int Maior_Valor = 0;
	int Menor_Valor = 99999999;

	for (i = 0; i < 50; i++)
	{
		printf("Digite o valor: %i \n", i + 1);
		scanf_s("%i", &num);
		printf("\n");

		
		if (num > Maior_Valor)
		{
			Maior_Valor = num;
		}
		if (num < Menor_Valor)
		{
			Menor_Valor = num;
		}

	}
	printf("Maior valor eh %i \n Menor valor eh %i \n", Maior_Valor, Menor_Valor);

	system("pause");
	return 0;
}