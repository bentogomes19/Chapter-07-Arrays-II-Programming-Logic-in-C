#include <stdio.h>
#include <stdlib.h>
/*6. Faça um programa que preencha uma matriz 20  10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante.*/

int main()
{
	int mat[20][10], soma[10], result[20][10];

	for (int i=0; i<20; i++) //Linhas 
	{
		for(int j=0; j<10; j++) // Colunas
		{
			printf("Digite um valor para a matriz [%d][%d] : ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(int j=0; j<10; j++) //Colunas
	{
		soma[j] = 0;
		for (int i=0; i<20; i++) // Linhas
		{
			soma[j] += mat[i][j];
		}
	}

	for(int j=0; j<10; j++)  // Colunas 
	{
		for(int i=0; i<20; i++) // Linhas
		{
			result[i][j] = soma[j] * mat[j][i];
		}
	}

	for(int i=0; i<20; i++)
	{
		printf("\n");
		for(int j=0; j<10; j++)
		{
			printf("\t %d", result[i][j]);
		}
	}



	system("pause");
	return 0;
}