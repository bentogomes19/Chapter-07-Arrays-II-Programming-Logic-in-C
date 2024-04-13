#include <stdio.h>
#include <stdlib.h>

/* 9. Faça um programa que preencha uma matriz 3 x 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.*/

int main()
{
	float mat[3][3], n, result[3][3];

	for(int i=0; i<3; i++) // Linhas da Matriz
	{
		for (int j=0; j<3; j++) // Colunas da Matriz
		{
			printf("Digite um valor real para a matriz [%d][%d]: ", i,j);
			scanf("%f", &mat[i][j]); // Coletando os valores
		}
	}

	printf("Digite um número qualquer --> ");
	scanf("%f", &n);

	for(int i=0; i<3; i++) // multiplicando a matriz mat com o n
	{
		for (int j=0; j<3; j++)
		{
			result[i][j] = mat[i][j] * n;
		}
	}


	printf("\tMatriz 3x3\n");
	for(int i=0; i<3; i++)
	{
		printf("\n");
		for (int j=0; j<3; j++)
		{
			printf("\t %.2f", mat[i][j]);
		}
	}
	printf("\n\n\n");
	printf("\tMatriz Resultante\n");
	for(int i=0; i<3; i++)
	{
		printf("\n");
		for (int j=0; j<3; j++)
		{
			printf("\t %.2f", result[i][j]);
		}
	}



	system("pause");
	return 0;
}