#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int A, B, C;

	printf("Digite A: ");
	scanf_s("%i", &A);
	printf("Digite B: ");
	scanf_s("%i", &B);
	printf("Digite C: ");
	scanf_s("%i", &C);

	float R = pow((A + B), 2);
	float S = pow((B + C), 2);

	float D = (R + S) / 2;

	printf("O valor sera de: %.2f \n", D);

	system("PAUSE");
	return 0;
}