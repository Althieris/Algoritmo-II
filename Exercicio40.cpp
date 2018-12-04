#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int quant = 0, cod;

	float total;

	while (quant != -1) {
		printf("Informe a quantidade vendida ( use -1 para sair ) \n");
		cin >> quant;

		printf("Informe o codigo do produto: \n 1001 \t1324 \t6548 \t987 \t7623 \n");
		cin >> cod;

		if (cod = 1001) {
			total = quant * 5.32;
			printf("Total a pagar: %.2f \n", total);
		}
		else if (cod = 1324) {
			total = quant * 6.45;
			printf("Total a pagar: %.2f \n", total);
		}
		else if (cod = 6548) {
			total = quant * 2.37;
			printf("Total a pagar: %.2i \f", total);
		}
		else if (cod = 987) {
			total = quant * 5.32;
			printf("Total a pagar: %.2i \f", total);
		}
		else if (cod = 7623) {
			total = quant * 6.45;
			printf("Total a pagar: %.2f \n", total);
		}
	}

	system("pause");
	return 0;
}