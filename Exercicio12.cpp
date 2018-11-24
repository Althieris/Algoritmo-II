#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>

int main()
{
	float area, base, altura;

	printf("Digite a altura do triangulo: \n");
	scanf_s("%f", &altura);

	printf("Digite a base do triangulo: \n");
	scanf_s("%f", &base);
	
	area = ((base * altura) / 2);

	printf("A area do triangulo eh:  %.2f", area);
	
	system("pause");
	return 0;
}
