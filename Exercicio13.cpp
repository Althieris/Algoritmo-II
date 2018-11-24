#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>

int main()
{
	int numero;
	int impar = 1;
	int i = 0;

	printf("Digite um numero inteiro positivo: \n");
	scanf_s("%i", &numero);

	printf("Os numeros impares sao: %i \n", numero);

	while (i < numero)
	{
		printf("%i /", impar);
		impar = impar + 2;
		i = i + 1;
	}
	system("pause");

	return 0;
}