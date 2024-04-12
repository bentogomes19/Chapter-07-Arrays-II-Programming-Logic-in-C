#include <stdio.h>
#include <stdlib.h>
/* 1. Faça um programa que preencha uma matriz M (2  2), calcule e mostre a matriz R, resultante da
multiplicação dos elementos de M pelo seu maior elemento. */ 
int main()
{
	int i, j, m[2][2], r[2][2], maior;

	for (i=0; i<2; i++) // Linhas 
	{
		for(j=0; j<2; j++) // Colunas
		{
			printf("Digite um valor para a matriz [%d][%d] = ", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	maior = m[0][0];

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			if (m[i][j] > maior)
			{
				maior = m[i][j];
			}
		}
	}

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			r[i][j] = maior * m[i][j];
		}
	}


	for (i=0; i<2; i++) // Linhas 
	{
		for(j=0; j<2; j++) // Colunas
		{
			printf("matriz [%d][%d] = %d\n", i, j, m[i][j]);
		}
	}

	for (i=0; i<2; i++) // Linhas 
	{
		for(j=0; j<2; j++) // Colunas
		{
			printf("Matriz Resultante [%d][%d] = %d\n", i, j, r[i][j]);
		}
	}

	system("pause");
	return 0;
}