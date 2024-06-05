#include <stdio.h>
#include <stdlib.h>
/* 2. Crie um programa que preencha uma matriz 2  4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz. */

int main()
{
	int i,j, k, l, m, mat[2][4], soma_par;
	float media;
	k = 0;
	l = 0;
	m = 0;
	soma_par = 0;
	for(i=0; i<2; i++) // Linha
	{
		for(j=0; j<4; j++) // Coluna
		{
			printf("Digite um valor para a matriz [%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);

			if (mat[i][j] % 2 == 0)
			{
				soma_par += mat[i][j];
				l++;
			}
			if (i==0)
			{
				if (mat[i][j] >= 12 && mat[i][j] <= 20)
				{
					k++;
				}
			}
			if (i==1)
			{
				if (mat[i][j] >= 12 && mat[i][j] <= 20)
				{
					m++;
				}
			}
		}
	}	
	media = (float)soma_par / l;
	printf("A quantidade de elementos maiores que 12 e menores que 20 na coluna 01 = %d.\n", k);
	printf("A quantidade de elementos maiores que 12 e menores que 20 na coluna 02 = %d.\n", m);
	printf("A média dos elementos pares da matriz = %.2f\n", media);

	system("pause");
	return 0;
}