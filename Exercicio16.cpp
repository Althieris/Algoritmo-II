#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"pch.h"
#include<iostream>
#include <string.h>

bool encontra(char vet[], char letra)
{
	for (int i = 0; i < strlen(vet); i++)
	{
		if (vet[i] == letra) 
		{
			printf("%i \n", i + 1);
		}
			return true;
	}

	return false;
}


int main(void)
{
	char nome[]= "Algoritmo";
	

	if (encontra(nome, 'x'))
	{
		printf("\nLetra encontrada!\n");
	}
	else 
	{
		printf("\nLetra nao encontrada\n");
	}

	system("pause");
	
}
