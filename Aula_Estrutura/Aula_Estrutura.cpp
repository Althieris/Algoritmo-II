// Aula_Estrutura.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

/*
int main()
{
	struct ConsultaAtual
	{
		char nomePaciente[30];
		char cpfPaciente[11];
		int diaConsulta;
		int mesConsulta;
		int anoConsulta;
		int horaConsulta;
		int minutoConsulta;
	};
}

int main()
{
	struct Agenda[5];
	{
		char nomePaciente[30];
		char cpfPaciente[11];
		int diaConsulta;
		int mesConsulta;
		int anoConsulta;
		int horaConsulta;
		int minutoConsulta;
	};
}

*/

struct Carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char cor[10];
	char placa[8];
};

void LerDadosCarro()
{
	struct Carro meuCarro;

	printf("DIGITE O MODELO: ");
	fgets(meuCarro.modelo, 10, stdin);
	//gets_s(carrao.modelo);

	printf("DIGITE A MARCA: ");
	fgets(meuCarro.marca, 10, stdin);

	printf("DIGITE O ANO: ");
	scanf_s("%i", &meuCarro.ano);

	printf("DIGITE A COR: ");
	fgets(meuCarro.cor, 10, stdin);

	printf("DIGITE A PLACA: ");
	fgets(meuCarro.placa, 8, stdin);

}
int main()
{
	struct Carro meuCarro;
	{
		LerDadosCarro();

	};
}