#include "pch.h"
#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
	int x, y, z;

	printf("Digite o valor de X. \n");
	cin >> x;

	printf("Digite o valor de Y. \n");
	cin >> y;

	printf("Digite o valor de Z. \n");
	cin >> z;

	int soma = x + y + z;

	if (x < soma & y < soma & z < soma)
	{
		if (x == y & x == z & y == z)
		{
			printf("Triangulo equilatero. \n");
		}
		else if (x == y || y == z)
		{
			printf("Triangulo isoscele. \n");
		}
		else if (x != y || x != z)
		{
			printf("Triangulo escaleno. \n");
		}
		else
		{
			printf("Nao pode ser um triangulo. \n");
		}
	}

	system("PAUSE");
	return 0;
}
