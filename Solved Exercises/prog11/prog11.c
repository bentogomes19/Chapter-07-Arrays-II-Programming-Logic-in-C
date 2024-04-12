#include <stdio.h>
#include <stdlib.h>

/*23. Crie um programa que receba as vendas semanais (de um mês) de cinco vendedores de uma loja e armazene
 essas vendas em uma matriz.
O programa deverá calcular e mostrar:
■■ o total de vendas do mês de cada vendedor;
■■ o total de vendas de cada semana (todos os vendedores juntos);
■■ o total de vendas do mês. */

int main() 
{

	int i, j, mat[4][5], tot_vend, tot_sem, tot_geral;

	for(i=0; i<4; i++) 
	{
		for(j=0; j<5; j++) 
		{
			printf("Vendedor %d --> Digite a quantidade de vendas na semana: ", j+1);
			scanf("%d", &mat[i][j]);
		}
	}

	for (i=0; i<5; i++)
	{
		tot_vend = 0;
		for(j=0; j<4; j++)
		{
			tot_vend += mat[j][i];
		}
		printf("Total de vendas no mês vendedor %d --> %d\n", i+1, tot_vend);
	}

	for (i=0; i<4; i++)
	{
		tot_sem = 0;
		for(j=0; j<5; j++)
		{
			tot_sem += mat[i][j];
		}
		printf("Total de vendas na semana vendedor %d --> %d\n", i+1, tot_sem);
	}

	tot_geral = 0;

	for (i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			tot_geral += mat[i][j];
		}
	}

	printf("Total de vendas do mês --> %d\n", tot_geral);



	system("pause");
	return 0;
}
