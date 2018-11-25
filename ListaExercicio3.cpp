#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int idade_antiga;
	printf("Digite sua idade. \n");
	scanf_s("%i", &idade_antiga);

	int convert = idade_antiga * 365;

	int anos = convert / 365;
	printf("%i \n", anos);

	int meses = anos * 12;
	printf("%i \n", meses);

	int dias = anos * 365;
	printf("%i \n", dias);

	system("PAUSE");
	return 0;
}

