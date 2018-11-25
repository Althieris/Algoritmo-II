
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int quantidade, cod;
	float preco, preco_total;

	printf("Digite o codigo do produto: \n");
	scanf_s("%i", &cod);
	printf("Digite a quantidade de produto: \n");
	scanf_s("%i", &quantidade);

	if (cod == 1001)
	{
		preco = 5.32;
		preco_total = preco * quantidade;
	}
	else if (cod == 1324)
	{
		preco = 6.45;
		preco_total = preco * quantidade;
	}
	else if (cod == 6548)
	{
		preco = 2.37;
		preco_total = preco * quantidade;
	}
	else if (cod == 987)
	{
		preco = 5.32;
		preco_total = preco * quantidade;
	}
	else if (cod == 7623)
	{
		preco = 6.45;
		preco_total = preco * quantidade;
	}

	printf("O preco total eh: %.2f ", preco_total);
}

