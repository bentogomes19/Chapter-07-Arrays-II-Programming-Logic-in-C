#include <stdio.h>
#include <stdlib.h>

/* 3. Elabore um programa que preencha uma matriz 6 x 3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna. */

int main()
{
	int i, j, mat[6][3], maior, menor, l_maior, c_maior, l_menor, c_menor;

	for(i=0; i<6; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Digite um valor para a matriz [%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	maior = mat[0][0];
	menor = mat[0][0];
	l_maior = 0;
	c_maior = 0;
	l_menor = 0;
	c_menor = 0;
	for (i=0; i<6; i++)
	{
		for(j=0; j<3; j++)
		{
			if (mat[i][j] > maior)
			{
				maior = mat[i][j];
				l_maior = i;
				c_maior = j;
			}
			if (mat[i][j] < menor)
			{
				menor = mat[i][j];
				l_menor = i;
				c_menor = j;
			}
		}
	}
	printf("O Maior elemento da matriz --> %d ## Está na linha %d e coluna %d \n", maior, l_maior, c_maior);
	printf("O Menor elemento da matriz --> %d ## Está na linha %d e na coluna %d \n", menor, l_menor, c_menor);


	system("pause");
	return 0;
}