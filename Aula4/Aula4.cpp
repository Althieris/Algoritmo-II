// Aula4.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

/*enquanto (while)           repita(do while)                 para (for)
while (condicao)			do
{							{
......						....
}							} while(condicao) */



/*int main()
{   
	int a = 0;
	while (a <=5) //laco infinito
	{
		printf("%i\t",a);
		a++; // a = a + 1; // incremento
	}

	printf("\n=========================================\n");


	a = 0;
	while (a <= 5)
	{
		printf("%i\t", a);
		a++; // a = a + 1; // incremento
	}

	printf("\n============ DO WHILE ===================\n");

	do
	{
		printf("%i\t", a);
		a++; // a = a + 1; // incremento
	} while (a <= 5);
	
	system("pause");
}
  EXERCICIO */

int main()
void DetecaValoresEmOrdem()
{
	int i = 0; //i iterator
	int anterior = 0, numero = 0;
	int crescente = 1; //e crescente

	while ( i < 5)
	{
		numero = LerNumeroInteiro();

		if (i != 0)
		{
			anterior = numero;
		}
		else
		{
			if(anterior >= numero)
			{ 
				crescente = 0;
			}
		}
		anterior = numero;
		i++;
	}

	if (crescente == 1)
	{
		printf("Ordem crescente");
	}
	else
	{
		printf("Nao estavam em ordem crescente");
	}

}


// REPETICOES
// * valor inicil
// * condicao de parada
// * incremento/decremento


