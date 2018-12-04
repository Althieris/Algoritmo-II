#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	struct horario
	{
		int hora;
		int min;
	};

	int min = 0;

	printf("Digite um intervalo de tempo em minutos\n");
	cin >> min;

	struct horario A;

	A.hora = min / 60;
	A.min = min % 60;
	printf("%i horas e %i minutos\n", A.hora, A.min);

	system("pause");
	return 0;
}