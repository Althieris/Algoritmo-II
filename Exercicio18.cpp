#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>
#include <string.h>


int main()
{
	int numero;

	printf("Digite um numero entre 2 e 20: ");
	scanf_s("%i", &numero);

	if ((numero < 2) || (numero > 20))
	printf("Numero errado!");
	else
	{
	printf("%i\n", numero);
	printf("%i %i\n", numero, numero + 1);
	printf("%i %i %i\n", numero, numero + 1, numero + 2);
	printf("%i %i %i %i\n", numero, numero + 1, numero + 2, numero + 3);
	printf("%i %i %i\n", numero, numero + 1, numero + 2);
	printf("%i %i\n", numero, numero + 1);
	printf("%i\n", numero);
	}

	system("pause");
	return 0;
}
