#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>

int main() 
{
	int x,        
		n,        
		potencia, 
		contador;

	printf("\nDigite um numero inteiro: ");
	scanf_s("%d", &x);
	printf("Digite um numero um inteiro nao-negativo: ");
	scanf_s("%d", &n);

		
	potencia = 1;
	contador = 0;

	while (contador != n)
	{
		potencia = potencia * x;
		contador = contador + 1;
	}
	printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
	return 0;
}
