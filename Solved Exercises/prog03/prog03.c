#include <stdlib.h>
#include <stdio.h>
/* 3. Faça um programa que preencha:
■■ um vetor com oito posições, contendo nomes de lojas;
■■ outro vetor com quatro posições, com nomes de produtos;
■■ uma matriz com os preços de todos os produtos em cada loja.

 O programa deverá mostrar todas as relações (nome do produto — nome da loja) em que o preço não
ultrapasse R$ 120,00. */

int main()
{
	char nome_lojas[8][22];
	char produto[4][22];
	float preco[4][8];
	int i, j, k;

	for (i=0; i<4; i++)
	{

		printf("Digite o nome da produto : ");
		fflush(stdin);
		fgets(produto[i],22, stdin);

	}
	
	for(i=0; i<8; i++)
	{
		printf("Loja %d >> Digite o nome da loja: ", i+1);
		fflush(stdin);
		fgets(nome_lojas[i], 22, stdin);
	}

	for(i=0; i<4; i++) // Produtos
	{
		printf("%s", produto[i]);
		for(j=0; j<8; j++) // Lojas
		{
			printf("Loja : %s", nome_lojas[j]);
			printf("Digite o preço R$: ");
			scanf("%f", &preco[i][j]);
		}
	}

	for(i=0; i<4; i++)
	{
		for(j=0; j<8; j++)
		{
			if (preco[i][j] < 120)
			{
				printf("Produto\n");
				printf("%s", produto[i]);
				printf("Loja\n");
				printf("%s", nome_lojas[j]);
				printf("Preço R$ %.2f\n", preco[i][j]);
				printf("--------------\n");
			}
		}	
	}


	system("pause");
	return 0;
}