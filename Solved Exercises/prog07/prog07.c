#include <stdio.h>
#include <stdlib.h>
/*13. Faça um programa que preencha:
■■ um vetor com os nomes de cinco produtos;
■■ uma matriz 5  4 com os preços dos cinco produtos em quatro lojas diferentes;
■■ outro vetor com o custo do transporte dos cinco produtos.
O programa deverá preencher uma segunda matriz 5  4 com os valores dos impostos de cada produto,
de acordo com a tabela a seguir. 


Preço 									% de iMPosTo
Até R$ 50,00 								5
Entre R$ 50,00 e R$ 100,00 (inclusive) 		10
Acima de R$ 100,00 							20 

O programa deverá mostrar, ainda, um relatório com o nome do produto, o número da loja onde o
produto é encontrado, o valor do imposto a pagar, o custo de transporte, o preço e o preço final (preço
acrescido do valor do imposto e do custo do transporte).*/
int main()
{
	// Declaração das variáveis
	int i, j;
	char produto[5][22];
	float preco[5][4], custo[5], imposto[5][4], preco_final[5][4];

	for (i=0; i<5; i++) // Nome dos cinco produtos
	{
		printf("Produto %d --> Digite o nome do produto: ", i+1);
		fgets(produto[i], 22, stdin);
	}

	for(i=0; i<5; i++) // Cinco produtos
	{
		printf("\n%s\n", produto[i]);
		for(j=0; j<4; j++) // Quatro lojas diferentes
		{
			printf("Digite o preço do produto na loja %d: ", j+1);
			scanf("%f", &preco[i][j]);
		}
	}

	for(i=0; i<5; i++) // Vetor para o custo do transporte dos cinco produtos
	{
		printf("Produto %d --> Digite o valor do transporte (R$): ", i+1);
		scanf("%f", &custo[i]);
	}

	for (i=0; i<5; i++)
	{
		for(j=0; j<4; j++)
		{
			if (preco[i][j] <= 50)
			{
				imposto[i][j] = 0.05 * preco[i][j];

			}
			if (preco[i][j] > 50 && preco[i][j] <= 100)
			{
				imposto[i][j] = 0.1 * preco[i][j];
			}
			if (preco[i][j] > 100)
			{
				imposto[i][j] = 0.20 * preco[i][j];
			}
		}
	}

	printf("Relatório\n\n");
	for (i=0; i<5; i++)
	{
		printf("\nProduto\n");
		printf("%s\n", produto[i]);
		printf("---------------------\n");
		for (j=0; j<4; j++)
		{
			preco_final[i][j] = preco[i][j] + imposto[i][j] + custo[i];
			printf("Loja %d\n", j+1);
			printf("Preço = R$ %.2f\n", preco[i][j]);
			printf("Imposto a pagar = R$ %.2f\n", imposto[i][j]);
			printf("Preço Final = R$ %.2f\n", preco_final[i][j]);
		}
		printf("Custo do Transporte = R$ %.2f\n", custo[i]);
		printf("----------------------------------\n");
	}

	system("pause");
	return 0;
}