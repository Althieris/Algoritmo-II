// Condicao_Aula3.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>


/* double LerSalario()
{
	float salario;

	printf("Informe o salário:\n");
	scanf_s("%f", &salario);
	return salario; 

}

double CaulculaIR(double salario, double aliquota, double deducao)
{
		return (salario * aliquota) - deducao;
}
void ApresentaIR(double salario)
{
	double ir = 0;
	if (salario <= 1903.98)
	{
	printf("isento");
	}
	else if (salario <= 2826.65)
	{
		ir = CaulculaIR(salario, 0.075, 142.8);
		printf("Aliquota: 7.5%%, deducao: 142.8\n");
		printf("Valor IR: %.2f\n,", ir);
	}
	else if (salario <= 3751.05)
	{
		ir = CaulculaIR (salario, 0.15, 354.8);
		printf("Aliquota: 15%%, deducao: 354.8\n");
		printf("Valor IR: %.2f\n", ir);
	}
	else if (salario <= 4664.68)
		{
		ir = CaulculaIR (salario, 0.225, 636.13);
		printf("Aliquota: 22.5%%, deducao: 636.13\n ");
		printf("Valor IR: %.2f\n", ir);
	}
	else
	{
		ir = CaulculaIR (salario, 0275, 869.36);
		printf("Aliquota: 27.5%%, deducao: 869.36");
		printf("Valor IR: %.2f\n", ir);
	}
	
}
float main()
{
	double salario = LerSalario();
	ApresentaIR(salario);
	printf("\n\n");
	system("pause");
}

*/
void imprimirMenu()
{
	printf("=======================\n");
	printf("== ESCOLHA UMA OPCAO ==\n");
	printf("== 1 - a ==\n");
	printf("== 1 - b ==\n");
	printf("== 1 - c ==\n");
	printf("=======================\n");

	int opcao = 0;
	scanf_s("%i", &opcao);

	switch (opcao)

	case 1:
	{
		printf("Escolha opcao a");
	}
	break;

	case 2:
	{
		printf("Escolha opcao b");
	}
	break;

	case 3:
	{
		printf("Escolha opcao c");
	}
	break;
}





