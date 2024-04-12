#include <stdio.h>
#include <stdlib.h>

/* 1. Faça um programa que preencha uma matriz 3  5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.*/

int main()
{
	int i, j, k, mat[3][5];
	k = 0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Digite um valor para a matriz [%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);

			if (mat[i][j] >= 15 && mat[i][j] <= 20)
			{
				k++;
			}
		}
	}

	printf("A quantidade de elementos entre 15 e 20 é de %d.\n", k);

	system("pause");
	return 0;
}