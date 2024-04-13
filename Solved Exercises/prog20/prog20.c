#include <stdlib.h>
#include <stdio.h>
/*10. Crie um programa que preencha uma matriz 5  5 com números inteiros, calcule e mostre a soma:
■■ dos elementos da linha 4;
■■ dos elementos da coluna 2;
■■ dos elementos da diagonal principal;
■■ dos elementos da diagonal secundária;
■■ de todos os elementos da matriz.*/

int main()
{
	int mat[5][5], soma1, soma2, soma3, soma4, soma5, somat;

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("Preencha a a matriz [%d][%d]: ",i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	soma1 = 0;
	for(int j=0; j<5; j++) // Soma dos elementos da linha 04
	{
		soma1 += mat[3][j];
	}

	soma2 = 0;
	for(int i=0; i<5; i++) // Soma dos elementos da coluna 02
	{
		soma2 += mat[i][1];
	}

	soma3 = 0;
	for(int i=0; i<5; i++) // Soma dos elementos na diagonal principal
	{
		for(int j=0; j<5; j++)
		{
			if(i==j)
			{
				soma3 += mat[i][j];
			}
		}
	}

	soma4 = 0;
	for(int j=0; j<5; j++) // Soma dos elementos na diagonal secundária
	{
		for(int i=0; i<5; i++)
		{
			if(i==j)
			{
				soma4 += mat[i][j];
			}
		}
	}
	somat = 0;
	for(int i=0; i<5; i++) // Soma dos elementos da matriz 5x5
	{
		for(int j=0; j<5; j++)
		{
			somat += mat[i][j];
		}
	}

	printf("\nMatriz 5x5\n");
	for(int i=0; i<5; i++)
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			printf("\t %d", mat[i][j]);
		}
	}
	printf("\nSoma dos elementos da linha 04 -> %d\n", soma1);
	printf("\nSoma dos elementos da coluna 02 -> %d\n", soma2);
	printf("\nSoma dos elementos da diagonal principal -> %d\n", soma3);
	printf("\nSoma dos elementos da diagonal secundária -> %d\n", soma4);
	printf("\nSoma dos elementos da matriz 5x5-> %d\n", somat);

	printf("\n");

	system("pause");
	return 0;
}