#include "pch.h"
#include <iostream>

int main()
{
	int Idade = 1;
	int Maior_Idade = 0;
	int Contador = 0;
	int Opcao_Sexo, Opcao_Cabelo, Opcao_Olhos = 0;
	printf("Digite idade -1 para encerrar\n");

	while (Idade > 0)
	{
		printf("Digite sua idade: ");
		scanf_s("%i", &Idade);
		printf("\n");
		if (Idade < 0)
		{
			break;
			system("cls");

		}

		printf("Sexo \n1-Masculino \n2-Feminino \n Digite: ");
		scanf_s("%i", &Opcao_Sexo);
		printf("\n");

		printf("Cor dos olhos \n1-azuis \n2-verdes \n3-castanhos \n Digite:");
		scanf_s("%i", &Opcao_Olhos);
		printf("\n");

		printf("Cor do cabelo \n1-louros \n2-castanhos \n3-pretos \n Digite:");
		scanf_s("%i", &Opcao_Cabelo);
		printf("\n");

		if (Idade > Maior_Idade)
		{
			Maior_Idade = Idade;
		}
		if ((Opcao_Sexo == 2) && (18 >= Idade) && (Idade <= 35) && (Opcao_Olhos == 2) && (Opcao_Cabelo == 1))
		{
			Contador = Contador++;
		}
		printf("Dado armazenado \n");
		system("pause");
		system("cls");

	}

	printf("A maior idade e %i \n A quantidade de mulheres de idade 18 a 35 de olhos verdes e cablos louros e %i ", Maior_Idade, Contador);

	system("pause");
	return 0;

}