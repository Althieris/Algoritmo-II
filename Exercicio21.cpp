
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int numeros[100];
	int quant, i = 0, soma = 0;

	printf("Digite a quantidade de numeros que deseja digitar. \n");
	cin >> quant;

	for (i = 0; i < quant; i++)
	{
		printf("Digite o numero %i . \n", i + 1);
		cin >> numeros[i];

		if ((numeros[i] % 2) == 0)
		{
			soma = soma + numeros[i];
		}

		printf("Sequencia: %i, ", numeros[i]);
	}

	printf("A soma dos numeros pares e de: %i \n", soma);

	system("pause");
	return 0;
}