#include <stdio.h>
#include <stdlib.h>

/* 2. Faça um programa que preencha uma matriz 10 × 3 com as notas de dez alunos em três provas. O
programa deverá mostrar um relatório com o número dos alunos (número da linha) e a prova em que
cada aluno obteve menor nota. Ao final do relatório, deverá mostrar quantos alunos tiveram menor
nota em cada uma das provas: na prova 1, na prova 2 e na prova 3.*/

int main()
{
	int i, j, notas[10][3], q1, q2, q3, menor, p_menor;

	for(i=0; i<10; i++) // Número do aluno
	{
		for(j=0; j<3; j++) // Notas
		{
			printf("Digite a nota do aluno [%d][%d] = ", i, j);
			scanf("%d", &notas[i][j]);
		}
			printf("\n");
	}
	q1 = 0;
	q2 = 0;
	q3 = 0;

	for(i=0; i<10; i++)
	{
		printf("\nAluno #%d\n", i);
		menor = notas[i][0];
		p_menor = 0;
		for(j=0; j<3; j++)
		{
			if (notas[i][j] < menor)
			{
				menor = notas[i][j];
				p_menor = j;
			}
		}
		printf("\nProva com a menor nota = %d\n", p_menor);
		if (p_menor == 0)
		{
			q1++;
		}
		else if (p_menor == 1)
		{
			q2++;
		}
		else if (p_menor == 2)
		{
			q3++;
		}
	}

	printf("Quantidade de alunos que tiraram a menor nota prova 01 = %d\n", q1);
	printf("Quantidade de alunos que tiraram a menor nota  prova 02 = %d\n", q2);
	printf("Quantidade de alunos que tiraram a menor nota  prova 03 = %d\n", q3);

	system("pause");
	return 0;
}