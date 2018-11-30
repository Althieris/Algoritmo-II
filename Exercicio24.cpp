#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>




using namespace std;

void inverterValores(float *x, float *y)
{
	float invert;

	invert = *x;
	*x = *y;
	*y = invert;

	printf("Numero 1: %.2f . Numero 2: %.2f. \n", *x, *y);
}

int main()
{
	float *v1, *v2;
	float p = 0, q = 0;
	v1 = &p;
	v2 = &q;

	printf("Digite o valor 1. \n");
	cin >> p;

	printf("Digite o valor de 2. \n");
	cin >> q;

	inverterValores(v1, v2);

	system("PAUSE");
	return 0;
}