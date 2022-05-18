/*Uma empresa de ônibus disponibilizou 40 lugares em um ônibus de viagem (20 nas janelas e 20 no corredor).
	Faça um programa que utilize 2 vetores para controlar as poltronas ocupadas, ou seja, um vetor para o corredor e outro para a janela.
	Considere que 1 representa as poltronas ocupadas e 0 representa poltrona desocupada.
	Este programa deve controlar a venda de passagens da seguinte maneira:

	- O cliente informa se deseja poltrona no corredor ou janela e, depois, o programa deve informar quais poltronas estão disponíveis
	para a venda (posições de valor 0).
	- O cliente então é perguntado qual posição quer, o vetor na posição informada deve ser alterado para ocupado
	(posição informada deve receber valor de 1).
	- Quando não existirem poltronas disponíveis, deve ser mostrada uma mensagem.

	Nota:
	- Inicialize os vetores com valor de 0;
	- Se o cliente deseja janela, você pode manipular somente o vetor janela, se o cliente desejar
	corredor pode ser trabalhado somente com o vetor corredor. */
#pragma warning(push)
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
constexpr auto assentos = 21;

int main(void) {

	int janela[assentos] = { 0 },
		corredor[assentos] = { 0 },
		opcao, posicao;
	
		printf("\tCOMPRE SUA PASSAGEM\n\n");
	while (true) {
		printf("1 - Janela || 2 - Corredor \n");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &opcao);


		switch (opcao)
		{
		case 1:
			printf("Escolha o seu assento\n\n");
			for (posicao = 1; posicao < assentos; posicao++)
			{
				if (posicao < 10) {
					printf(" ");
				}
				if (janela[posicao] == 0) {
					printf("  %d  Disponivel\n", posicao);
				}
				else {
					printf("  %d  Indisponivel\n", posicao);
				}
			}
			printf("\nDigite a opcao desejada: ");
			scanf("%d", &opcao);
			janela[opcao] = 1;
			break;
		case 2:
			printf("Escolha o seu assento\n\n");
			for (posicao = 1; posicao < assentos; posicao++)
			{
				if (posicao < 10) {
					printf(" ");
				}
				if (corredor[posicao] == 0) {
					printf("  %d  Disponivel\n", posicao);
				}
				else {
					printf("  %d  Indisponivel\n", posicao);
				}
			}
			printf("\nDigite a opcao desejada: ");
			scanf("%d", &opcao);
			corredor[opcao] = 1;
			break;
		default:
			printf("Opcao invalida!");
		}
		printf("Compra efetuada com sucesso!\n");
		printf("Digite 1 - CONTINUAR\n");
		printf("Digite 0 - SAIR\n");
		scanf("%d", &opcao);
		if (opcao == 0) {
			break;
		}
	}

	return(0);
}
#pragma warning(pop)