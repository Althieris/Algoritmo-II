#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool pesquisa_indice(char vet[], char letra)
{
	for (int i = 0; i < strlen(vet); i++)
	{
		if (tolower(vet[i]) == tolower(letra))
		{
			printf("%i \n", i + 1);
			return true;
		}
	}

	return false;
}

int main()
{
	char texto[30];
	char letra;

	printf("Favor digitar uma palavra. \n");
	cin >> texto;

	printf("Favor digitar uma letra que deseja pesquisar. \n");
	cin >> letra;

	if (pesquisa_indice(texto, letra))
	{
		printf("Letra encontrada! \n");
	}
	else
	{
		printf("Letra nao encontrada!! \n");
	}

	system("PAUSE");
	return(0);
}