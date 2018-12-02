#include "pch.h"
#include <iostream>
int lerdados()
{
	int a;
	printf("Digite a quantidade de carros vendido no mes: \n ");
	scanf_s("%i", &a);

	return a;

}
int calComissao(int salario, int qtcarro)
{
	int i;
	int valorcarro = 0;
	int comporcarro = 0;
	int porcporcarro = 0;

	
	for (i = 0; i < qtcarro; i++)
	{
		printf("Digite o valor do %i carro : \n", i + 1);
		scanf_s("%i", &valorcarro);

		porcporcarro = porcporcarro + (valorcarro*0.05);
		comporcarro = comporcarro + 50;
		valorcarro = 0;
	}
	int valortotal = porcporcarro + comporcarro;
	return valortotal;
}

int main()
{
	
	int salario = 937 * 2;
	int qtcarro = lerdados();

	int pagamento = calComissao(salario, qtcarro);

	printf("Seu salario com a comissao fica: R$ %i \n", pagamento + salario);

	system("Pause");
	return 0;
}