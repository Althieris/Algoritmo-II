#include "pch.h"
#include <iostream>

using namespace std;

typedef struct
{
	char nome[10];
	float altura;
	int peso;
	long long cpf;
	char sexo;

}pessoas;

int main()
{
	int i = 0;
	int qt = 0;
	int cont;
	long long busca;
	float imc;

	printf("Cadastro pessoal \n");

	pessoas usuario[100];

	for (i = 0; i < 100; i++)
	{
		printf("Digite altura 0 para encerrar. \n");
		printf("Digite sua altura. \n");
		cin >> usuario[i].altura;

		if (usuario[i].altura == 0)
		{
			break;
			system("cls");
		}

		printf("digite seu peso. \n");
		cin >> usuario[i].peso;

		printf("Digite seu nome. \n");
		cin >> usuario[i].nome;

		printf("Digite seu CPF. \n");
		cin >> usuario[i].cpf;

		printf("Digite M - Masculino e F - Feminino. \n");
		cin >> usuario[i].sexo;

		printf("Cadastro realizado \n");
		system("Pause");
		system("cls");

	}
	printf("Digite o CPF que deseja procurar. \n");
	cin >> busca;

	for (i = 0; i < 100; i++)
	{
		if (busca == usuario[i].cpf)
		{
			imc = usuario[i].peso / pow(usuario[i].altura, 2);
			cont = i;
			break;
			system("cls");
		}

	}
	printf("Dados do usuario \n");
	printf("Nome: %s\n", usuario[cont].nome);
	printf("Altura: %.2f\n", usuario[cont].altura);
	printf("Peso: %i\n", usuario[cont].peso);
	printf("CPF: %lld\n", usuario[cont].cpf);
	printf("Sexo: %c\n", usuario[cont].sexo);
	printf("imc: %.3f\n", imc);

	system("Pause");
	return 0;
}