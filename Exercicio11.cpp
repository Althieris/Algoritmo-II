#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>


int main()
{
	float  area, raio, PI;

	PI = 3.141592;

	printf("Digite o raio:\n");
	scanf_s("%f", &raio);
	area = PI * (pow(raio, 2));
	printf("A area da circunferencia eh: %f", area);

	system("pause");

	return 0;
}