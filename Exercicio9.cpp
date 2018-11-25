#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int opcao;
	float nota1, nota2, nota3, MediaAritimetica, MediaPonderada, MediaHarmonica, MdFinal;
	
	printf("Digite nota 1: \n");
	scanf_s("%f", &nota1);

	printf("Digite nota 2: \n");
	scanf_s("%f", &nota2);

	printf("Digite nota 3: \n");
	scanf_s("%f", &nota3);

	printf("Digite opcao-1 para arimetica // opcao-2 para ponderada // opcao-3 harmonica. ");
	scanf_s("%i", &opcao);

	if (opcao == 1)
	{
		MediaAritimetica = ((nota1 + nota2 + nota3) / 3);
		MdFinal = MediaAritimetica;
	}

	else if (opcao == 2)
	{
		float p1 = 3;
		float p2 = 3;
		float p3 = 4;

		MediaPonderada = ((p1 * nota1 + p2 * nota2 + p3 * nota3) / p1 + p2 + p3);
		MdFinal = MediaPonderada;
	}

	else if (opcao == 3)
	{
		MediaHarmonica = (((1 / nota1) + (1 / nota2) + (1 / nota3)) / 3);
		MdFinal = MediaHarmonica;
	}
	else
	{
	printf("Opcao incorreta. \n");
	}

	printf("%.2f", MdFinal);

	system("PAUSE");
	return 0;
}