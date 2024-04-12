#include <stdlib.h>
#include <stdio.h>
/* 4. Crie um programa que preencha uma matriz 10 x 20 com números inteiros e some cada uma das linhas, 
armazenando o resultado das somas em um vetor. A seguir, o programa deverá multiplicar cada
elemento da matriz pela soma da linha correspondente e mostrar a matriz resultante. */
int main()
{
	int i, j, mat[5][8], vet_soma[5], result[5][8], aux;

	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			printf("Preencha a matriz [%d][%d] = ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i=0; i<5; i++)
	{
		aux = 0;
		for(j=0; j<8; j++)
		{
			aux += mat[i][j];

		}
		vet_soma[i] = aux;
	}

	for(i=0; i<5; i++)
	{
		for(j=0; j<8; j++)
		{
			result[i][j] = mat[i][j] * vet_soma[i];
		}
	}

	printf("Matriz Resultante\n ");
	for(i=0; i<5; i++)
	{

		for(j=0; j<8; j++)
		{
			printf("%d\n", result[i][j]);
		}
	}
	
	printf("Vetor soma = ");
	for(i=0; i<5; i++)
	{
		printf("%d ", vet_soma[i]);
	}

	system("pause");
	return 0;
}