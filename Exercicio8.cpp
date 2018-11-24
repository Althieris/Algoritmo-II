// Exercicio8.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int idade;

	printf("Digite sua idade: ");
	scanf_s("%i", &idade);

	if ((idade >= 5) && (idade <= 7))
	{
		printf("Infantil A.", idade);
	}
	else if ((idade >= 8) && (idade <= 10))
	{
		printf("Infantil B.", idade);
	}
	else if ((idade >= 11) && (idade <= 13))
	{ 
		printf("Juvenil A.", idade);
	}
	else if ((idade >= 14) && (idade <= 17))
	{ 
		printf("Juvenil B.", idade);
	}
	else if ((idade >= 18))
	{
	printf("Adulto.", idade);
	}

	system("pause");
	return 0;



}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
