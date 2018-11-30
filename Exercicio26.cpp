#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int years_old, days;

	printf("Digite quantos anos voce tem. \n");
	cin >> years_old;

	days = (years_old * 365);

	printf("Voce ja viveu por %i dias.", days);

	system("pause");
	return 0;
}
