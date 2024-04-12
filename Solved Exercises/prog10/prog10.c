#include <stdio.h>
#include <stdlib.h>
/*18. Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o programa deverá distribuir
esses elementos em uma matriz 3 × 6 e, no final, mostrar a matriz gerada. */
int main()
{
	int i, j, k, vet[18], mat[3][6];

	for(i=0; i<18; i++)
	{
		printf("Digite o %d° número para o vetor: ", i+1);
		scanf("%d", &vet[i]);
	}

	k =0;
	for(i=0; i<3; i++) // Linhas 0, 1, 2 ,3
	{
		for(j=0; j<6; j++) // Colunas 0, 1, 2, 3, 4, 5, 6
		{
			mat[i][j] = vet[k];
			k++;
		}
	}

	printf("\n Matriz 3 x 6\n");
	for(i=0; i<3; i++) // Linhas 0, 1, 2 ,3
	{
		for(j=0; j<6; j++) // Colunas 0, 1, 2, 3, 4, 5, 6
		{
			printf("%d ", mat[i][j]);
		}
	}

	system("pause");
	return 0;
}
