#include <stdio.h>
#include <stdlib.h>

/*5. Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
■■ o total vendido em cada semana durante todo o ano;
■■ o total vendido pela loja no ano.*/

int main()
{	
	float mat[12][4], vendas_mes[12], vendas_sem[4], total = 0;

	for(int i=0; i<12; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("Mes %d # Semana %d # Digite o valor da venda --> ",i+1, j+1);
			scanf("%f", &mat[i][j]);
		}
	}

	for(int i=0; i<12; i++)
	{
		vendas_mes[i] = 0;
		for (int j=0; j<4; j++)
		{
			vendas_mes[i] += mat[i][j];
			total += mat[i][j];
		}
	}

	for(int j=0; j<4; j++)
	{
		vendas_sem[j] = 0;
		for(int i=0; i<12; i++)
		{
			vendas_sem[j] += mat[i][j];
		}
	}


	for (int i=0; i<12; i++)
	{
		if (i==0)
		{
			printf("JANEIRO\n");
		}
		if (i==1)
		{
			printf("FEVEREIRO\n");
		}
		if (i==2)
		{
			printf("MARÇO\n");
		}
		if (i==3)
		{
			printf("ABRIL\n");
		}
		if (i==4)
		{
			printf("MAIO\n");
		}
		if (i==5)
		{
			printf("JUNHO\n");
		}
		if (i==6)
		{
			printf("JULHO\n");
		}
		if (i==7)
		{
			printf("AGOSTO\n");
		}
		if (i==8)
		{
			printf("SETEMBRO\n");
		}
		if (i==9)
		{
			printf("OUTUBRO\n");
		}
		if (i==10)
		{
			printf("NOVEMBRO\n");
		}
		if (i==11)
		{
			printf("DEZEMBRO\n");
		}
		printf("\nVendas mês %d -> R$ %.2f\n", i+1, vendas_mes[i]);
	}

	for (int i=0; i<4; i++)
	{
		printf("\nSemana %d ## Total de vendas >> R$ %.2f\n", i+1, vendas_sem[i]);
	}

	printf("Total de vendas no ano --> R$ %.2f\n", total);
	system("pause");
	return 0;
}