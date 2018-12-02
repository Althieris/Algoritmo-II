#include "pch.h"
#include <iostream>

int main()
{
	float Altura_Chico = 1.50;
	float Altura_Zeh = 1.10;
	int contador = 0;

	while (Altura_Zeh < Altura_Chico)
	{
		Altura_Zeh = Altura_Zeh + 0.03;
		Altura_Chico = Altura_Chico + 0.02;
		contador = contador + 1;
	}
	printf("Zeh tera %.2f e Chico tera %.2f com %i anos. \n", Altura_Zeh, Altura_Chico, contador);

	system("pause");
	return 0;

}