// Exercicio23.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//


#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	float tempo, velocidade, distancia, litros_usados;
	float km = 12;

	printf("Favor digitar o tempo da viagem: \n");
	scanf_s("%f", &tempo);

	printf("Favor digitar a velocidade media da viagem: \n");
	scanf_s("%f", &velocidade);

	distancia = (tempo * velocidade);

	printf("A Distancia percorrida eh: %2.f \n", distancia);

	litros_usados = (distancia / km);

	printf("A quantidade de litros usados sao: %2.f\n", litros_usados);
	printf("O tempo gasto na viagem eh: %2.f \n", tempo);
	printf("A velocidade media da viagem eh: %2.f \n", velocidade);

	system("pause");
	return 0;
}


