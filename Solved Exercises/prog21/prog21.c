#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*11. Elabore um programa que: receba a idade de oito alunos e armazene-as em um vetor; armazene o código
de cinco disciplinas em outro vetor; armazene em uma matriz a quantidade de provas que cada aluno fez
em cada disciplina.*/

int main()
{
	int k = 0, idade[8], cod[5], mat[8][5], cod_usr;

	for (int i=0; i<8; i++) // Vetor para armazenar as idades dos alunos
	{
		printf("Aluno %d --> Digite a sua idade: ", i+1);
		scanf("%d", &idade[i]);
	}

	for(int i=0; i<5; i++) // Vetor para os códigos das 5 disciplinas
	{
		printf("Digite o código das 5 disciplinas da prova : ");
		scanf("%d", &cod[i]);
	}
	for(int i=0; i<8; i++) // Matriz para armazenar a quantidade de provas que os alunos fizeram
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			printf("Digite a quantidade de provas que o aluno %d fez na disciplinas #%d : ", i+1, cod[j]);
			scanf("%d", &mat[i][j]);
		}
	}

	for(int i=0; i<8; i++)
	{
		for(int j=0; j<5; j++)
		{
			if (idade[i] >= 18 && idade[i] <= 25 && mat[i][j] > 2)
			{
				k++;
			}
		}
	}
	printf("A quantidade de alunos que fizeram mais de duas provas --> %d\n", k);


	printf("\tAlunos\n");
	for(int i=0; i<8; i++)
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			printf("\t %d", mat[i][j]);
		}
	}

	system("pause");
	return 0;
}