// CondicionaisAula2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
// "e"  - && verdadeiro somente quando todas condicoes forem verdadeiras
// "ou" - || basta que uma condicao seja verdadeira para ser verdadeiro

int main()
{
	int LerNumeroInteiro()
	{
		int a;

		Printf("Favor digitar um numero inteiro: ");
		Scanf_s("%i", &a);

		return a;
	}
	int MaiorValorInteiro(int a, int b, int c, int d)
	{
		int maior = a;

		if (maior < b)
		{
			maior = b;
		}
		if (maior < c)
		{
			maior = c;
		}
		if (maior < d)
		{
			maior = d;
		}
		return maior;
	}
	int main()
	{
		int primeiro = LerNumeroInteiro();
		int segundo = LerNumeroInteiro();
		int terceiro = LerNumeroInteiro();
		int quarto = LerNumeroInteiro();

		int m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);

		printf("Maior valor encontrado: %i\n\n", m);
	
		float MaiorValorInteiro = CalculoMedia((float)primeiro, (float)segundo, (float)terceiro, (float)quarto)

			printf("A media dos valores digitados eh: %f\n", (float)MediaValores);

		imprevalormaiorqueamedica(primeiro, segundo, terceiro, quarto)
		system("pause");

	
}

