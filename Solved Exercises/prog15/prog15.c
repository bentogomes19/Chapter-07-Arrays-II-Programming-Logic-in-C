#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*4. Faça um programa que receba:
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15  5;
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
■■ a média da classe.*/


int main()
{
	float soma_notas;
	float alunos[15][5], medias[15];
	char nome[15][22];

	for(int i=0; i<15; i++)
	{
		printf("\nAluno %d --> Digite o seu nome: ", i+1);
		fgets(nome[i], 22, stdin);
		fflush(stdin);

		for(int j=0; j<5; j++)
		{
			printf("Informe a nota da prova %d : ", j+1);
			scanf("%f", &alunos[i][j]);
			fflush(stdin);
		}
	}

	for (int i=0; i<15; i++) // Calcular a media das provas e guardar em um vetor com 5 posições contendo a média dos alunos
	{
		soma_notas = 0;
		for (int j=0; j<5; j++)
		{
			soma_notas += alunos[i][j];
		}
		medias[i] = soma_notas / 5;
	}


	for (int i=0; i<15; i++)
	{
		printf("\nNome: %s", nome[i]);
		printf("Media --> %.2f\n", medias[i]);
		if (medias[i] >=6)
		{
			printf("Situação --> Aprovado\n");
		}
		else 
		{
			printf("Situação --> Reprovado\n");
		}
	}

	system("pause");
	return 0;
}