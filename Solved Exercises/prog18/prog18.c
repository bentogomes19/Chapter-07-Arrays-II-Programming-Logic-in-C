#include <stdio.h>
#include <stdlib.h>
/*8. Crie um programa que preencha duas matrizes 3  8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3  8;
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3  8.*/

int main()
{
	int mat1[3][8], mat2[3][8], soma[3][8], dif[3][8];

	for(int i=0; i<3; i++) // Linhas  Matriz 01
	{
		for(int j=0; j<8; j++) // Colunas Matriz 01
		{
			printf("Digite um valor para a matriz1 [%d][%d] : ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}

	for(int i=0; i<3; i++) // Linhas Matriz 02
	{
		for(int j=0; j<8; j++) // Colunas Matriz 02
		{
			printf("Digite um valor para a matriz2 [%d][%d] : ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}

	for(int i=0; i<3; i++) // Linhas Matriz 03 soma das matrizes 01 e 02
	{
		for(int j=0; j<8; j++) // Colunas da Matriz 03
		{
			soma[i][j] = mat1[i][j] + mat2[i][j]; // mat03[i][j]
		}
	}

	for(int i=0; i<3; i++) // Linhas Matriz 04 a diferença das matrizes 01 e 02
	{
		for(int j=0; j<8; j++) // Colunas da Matriz 04
		{
			dif[i][j] = mat1[i][j] - mat2[i][j]; // mat04[i][j]
		}
	}

	printf("\n\tMatriz 01\n");
	for (int i=0; i<3; i++) // Mostrando os elementos da Matriz 01
	{
		printf("\n");
		for (int j=0; j<8; j++)
		{
			printf("\t %d", mat1[i][j]);
		}
	}
	printf("\n\n\n");
	printf("\tMatriz 02\n");
	for (int i=0; i<3; i++) // Mostrando os elementos da Matriz 02
	{
		printf("\n");
		for (int j=0; j<8; j++)
		{
			printf("\t %d", mat2[i][j]);
		}
	}

	printf("\n\n\n");
	printf("\tMatriz SOMA\n");
	for (int i=0; i<3; i++) // Mostrando a Matriz 03 - SOMA
	{
		printf("\n");
		for (int j=0; j<8; j++)
		{
			printf("\t %d", soma[i][j]);
		}
	}
	printf("\n\n\n");
	printf("\tMatriz DIFERENÇA\n");
	for (int i=0; i<3; i++) // Mostrando a Matriz 04 - DIFERENÇA
	{
		printf("\n");
		for (int j=0; j<8; j++)
		{
			printf("\t %d", dif[i][j]);
		}
	}
	printf("\n\n");



	system("pause");
	return 0;
}