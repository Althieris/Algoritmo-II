#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float salario_bruto, salario_prev, salario_liquido, resp1, resp2 = 0;

	printf("Digite o salario bruto. \n");
	cin >> salario_bruto;

	salario_prev = (salario_bruto) * 0.1;
	resp1 = salario_prev - salario_bruto;
	salario_liquido = (salario_prev) * 0.05;
	resp2 = salario_liquido - resp1;

	printf("Salario bruto: %.2f, salario liquido de R$%.2f. \n", salario_bruto, resp2);

	system("PAUSE");
	return 0;
}