// Exercicio5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float custo_fabrica;

	printf("Digite o custo de fabrica de um carro: ");
	scanf_s("%f", &custo_fabrica);

	float imposto = (0.45 * custo_fabrica) / 100 ;
	float distribuidor = (0.28 * custo_fabrica) / 100;
	float total = custo_fabrica + imposto + distribuidor;
	

	printf("Seu carro saira por: %.2f\n", total);

	system("pause");
	return 0;
}
