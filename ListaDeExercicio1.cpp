

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float x1, x2, y1, y2;
	float distancia; 

	printf("Digite o valor de x1\n");
	scanf_s("%f", &x1);
	printf("Digite o valor de x2\n");
	scanf_s("%f", &x2);
	printf("Digite o valor de y1\n");
	scanf_s("%f", &y1);
	printf("Digite o valor de y2\n");
	scanf_s("%f", &y2); 


	distancia = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))); 
	printf("A distancia entre os pontos e %f\n", distancia);
	system("pause");

	return (0);
}
