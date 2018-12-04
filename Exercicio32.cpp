#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	printf("Pesquisa de Habitantes \n");

	float salario = 1, filhos = 0, medsal = 0, medfil = 0, maiorsal = 0, percsal100 = 0, contsal = 0, cont = 0, contsal100 = 0;
	int	contfil = 0;

	while (salario > 0)
	{
		printf("Favor digitar o seu salario. \n");
		cin >> salario;

		if (salario < 0)
		{
			break;
			system("cls");
		}

		printf("Favor digitar o numero de filhos. \n");
		cin >> filhos;

		medsal = medsal + salario;
		contsal = contsal + 1;

		medfil = medfil + filhos;
		contfil = contfil + 1;

		if (salario > maiorsal)
		{
			maiorsal = salario;
		}

		if (salario < 100)
		{
			contsal100++;
		}

		cont++;
		printf("Informacoes guardadas. \n");
		system("pause");
		system("cls");
	}
	percsal100 = (100 * contsal100) / cont;

	printf("Media do salario da populacao e de R$ %.2f\n", medsal / contsal);
	printf("Media do numero de filhos e de %.0f \n", medfil / contfil);
	printf("Maior salario e de R$ %.2f \n ", maiorsal);
	printf("Percentual de pessoas com o salario ate R$ 100 : %.0f % \n", percsal100);

	system("pause");
	return 0;

}