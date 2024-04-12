#include <stdlib.h>
#include <stdio.h>

/* 15. Elabore um programa que preencha:
■■ um vetor com cinco números inteiros;
■■ outro vetor com dez números inteiros;
■■ uma matriz 4  3, também com números inteiros.
O programa deverá calcular e mostrar:
■■ o maior elemento do primeiro vetor multiplicado pelo menor elemento do segundo vetor. O resultado dessa multiplicação,
adicionado aos elementos digitados na matriz, dará origem a uma segunda matriz (resultante); */

int main()
{

	int i,j;
	int vet1[5], vet2[10], mat[4][3], mat_result[4][3], maior, menor, mult;

	for(i=0; i<5; i++) // preenchendo o vetor 01
	{
		printf("Digite um valor para o vetor 01 [%d]: ", i);
		scanf("%d", &vet1[i]);
	}

	for(i=0; i<10; i++) // preenchendo o vetor 02
	{
		printf("Digite um valor para o vetor 02 [%d]: ", i);
		scanf("%d", &vet2[i]);
	}

	for(i=0; i<4; i++) // preenchendo a matriz
	{
		for(j=0; j<3; j++)
		{
			printf("Digite um valor para a matriz [%d][%d]: ", i,j);
			scanf("%d", &mat[i][j]);
		}
	}

	maior = vet1[0];
	for(i=0; i<5; i++)
	{
		if (vet1[i] > maior)
		{
			maior = vet1[i];
		}
	}

	menor = vet2[0];
	for(i=0; i<10; i++)
	{
		if (vet2[i] < menor)
		{
			menor = vet2[i];
		}
	}

	mult = maior * menor;
	printf("Matriz Resultante\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			mat_result[i][j] = mat[i][j] + mult;
			printf("%d\n", mat_result[i][j]);
		}
	}

	system("pause");
	return 0;
}