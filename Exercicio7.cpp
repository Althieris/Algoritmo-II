#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int A, B;

	printf("Digite valor de A \n");
	scanf_s("%i", &A);

	printf("Digite valor de B \n");
	scanf_s("%i", &B);

	if ((A > B) && ((A % B) == 0))
	{
		printf("Os numeros sao multiplos \n");
	}
	else
	{
		printf("Os numeros NAO nao multiplos \n");
	}

	system("pause");
}