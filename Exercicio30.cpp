#include "pch.h"
#include <iostream>
int lernum()
{
	int a;
	printf("Digite valor de 2 a 20: ");
	scanf_s("%i", &a);

	while ((a < 2) || (a > 20))
	{
		printf("Numero invalido! Favor Digitar novamente valor de 2 a 20:");
		scanf_s("%i", &a);
	}
	return a;
}

int main()
{
	int num = lernum();
	int j, i, k;

	for (i = 0; i < num; i++)
	{
		k = 1;
		for (j = 0; j < num; j++)
		{
			if (j < i)
			{
				printf("X");
			}
			else
			{
				printf("%i", k);
				k = k + 1;
			}

		}
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}
