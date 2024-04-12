#include <stdio.h>
#include <stdlib.h>


/* 5. Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da
linha em que se encontra o menor elemento da matriz. Elabore um programa que carregue uma matriz
4  7 com números reais, calcule e mostre seu MINMAX e sua posição (linha e coluna). */


int main()
{
	int i,j, mat[4][7], maior, menor, l_menor, col_menor;


	for(i=0; i<4; i++)
	{
		for(j=0; j<7; j++)
		{
			printf("Preencha a matriz [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	menor = mat[0][0];
	l_menor = 0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<7; j++)
		{
			if (mat[i][j] < menor)
			{
				menor = mat[i][j];
				l_menor = i;
			}
		}
	}
	maior = mat[l_menor][0];
	col_menor = 0;
	for(i=0; i<7; i++)
	{
		if (mat[l_menor][j] > maior)
		{
			maior = mat[l_menor][j];
			col_menor = j;
		}

	}


	printf("Maior = %d\n", maior);
	printf("Linha menor  =  %d\n", l_menor);
	printf("Coluna = %d\n", col_menor);






	system("pause");
	return 0;
}