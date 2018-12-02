#include "pch.h"
#include <iostream>

int Ler_Numeros_Negativos(int i, int cont, int num[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("Digite o valor %i. \n", i + 1);
		scanf_s("%i", &num[i]);

		if (num[i] < 0)
		{
			cont = cont + 1;
		}
	}

	return cont;
}


int main()
{
	int i = 0;
	int cont = 0;
	int num[5];

	int Numero_Negativo = Ler_Numeros_Negativos(i, cont, num);

	printf("Voce digitou:  %i numero(s) negativo.", Numero_Negativo);

	system("pause");
	return 0;
}