
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int calc(int numero)

{
	int total;
	total = 0;

	if (numero == 0)
	{
		return total;
	}
	else
	{
		return total = numero + calc(numero - 1);
	}

}

int main()
{
	int numero;

	printf("Digite um numero inteiro e positivo. \n");
	scanf_s("%i", &numero);

	int total = calc(numero);

	printf("A soma dos numeros e de %i \n", total);

	system("pause");
	return 0;
}