#include <stdio.h>
#include <stdlib.h>

/* 8. Elabore um programa que preencha uma matriz 6 x 4 com números inteiros, calcule e mostre quantos
elementos dessa matriz são maiores que 30 e, em seguida, monte uma segunda matriz com os elementos diferentes de 30.
No lugar do número 30, da segunda matriz, coloque o número zero.*/

int main()
{
	int i, j, k, mat[6][4], mat2[6][4], qtd_elementos = 0;

	for(i=0; i<6; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("Preencha a matriz [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for (i=0; i<6; i++)
	{
		for(j=0; j<4; j++)
		{
			if (mat[i][j] > 30)
			{
				qtd_elementos ++;
			}
			if (mat[i][j] == 30)
			{
				mat2[i][j] = 0;
			}
			else
			{
				mat2[i][j] = mat[i][j];
			}
		}
	}
	printf("Quantidade de elementos maiores do que 30 = %d\n\n", qtd_elementos);
	for(i=0; i<6; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("Matriz 2 [%d][%d] = %d\n", i,j, mat2[i][j]);
		}
	}


	system("pause");
	return 0;
}