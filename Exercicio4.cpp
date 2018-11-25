// Exercicio4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	float n1, n2, n3, MediaPonderada, MediaFinal;

	printf("Digite o valor da nota 1: ");
	scanf_s("%f", &n1);

	printf("Digite o valor da nota 2: ");
	scanf_s("%f", &n2);

	printf("Digite o valor da nota 3:  ");
	scanf_s("%f", &n3);

	float p1 = 2.3;
	float p2 = 5;
	float p3 = 6;

	MediaPonderada = ((p1 * n1 + n2 * p2 + p3 * n3) / p1 + p2 + p3);
	MediaFinal = ((n1 + n2 + n3) / 3);

	printf("Sua Media Ponderada eh: %.2f, e sua Media Final eh: %.2f \n ", MediaPonderada, MediaFinal);

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
