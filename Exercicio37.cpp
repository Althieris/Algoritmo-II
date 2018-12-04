#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
	int Dia1, Mes1, Ano1, Dia2, Mes2, Ano2, Diferenca_Dia, Diferenca_Mes, Diferenca_Ano;

	struct data
	{
		int dia;
		int mes;
		int ano;
	};

	struct data prim;
	struct data seg;

	printf("Digite a primeira data: \n");
	printf("Dia: ");
	cin >> Dia1;

	printf("Mes: ");
	cin >> Mes1;

	printf("Ano: ");
	cin >> Ano1;

	printf("Digite a segunda data: \n");

	printf("Dia: ");
	cin >> Dia2;

	printf("Mes: ");
	cin >> Mes2;

	printf("Ano: ");
	cin >> Ano2;

	prim.dia = Dia1;
	prim.mes = Mes1;
	prim.ano = Ano1;

	seg.dia = Dia2;
	seg.mes = Mes2;
	seg.ano = Ano2;
	
	Diferenca_Dia = prim.dia - seg.dia;
	Diferenca_Mes = prim.mes - seg.mes;
	Diferenca_Ano = prim.ano - seg.ano;

	printf("A diferenca entre as datas eh: \n");

	printf("%i Dias. \n", Diferenca_Dia);
	printf("%i Meses. \n", Diferenca_Mes);
	printf("%i Anos. \n", Diferenca_Ano);

	system("PAUSE");
	return 0;
}
