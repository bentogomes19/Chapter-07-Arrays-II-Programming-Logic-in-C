#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*14. Faça um programa que receba:
■■ um vetor com o nome de cinco cidades diferentes;
■■ uma matriz 5  5 com a distância entre as cidades, e na diagonal principal deve ser colocada automaticamente a distância zero, ou seja, não deve ser permitida a digitação;
■■ o consumo de combustível de um veículo, ou seja, quantos quilômetros esse veículo percorre com
um litro de combustível.

O programa deverá calcular e mostrar:

■■ os percursos que não ultrapassam 250 quilômetros (os percursos são compostos pelos nomes das
cidades de origem e pelos nomes das cidades de destino);
■■ todos os percursos (nome da cidade de origem e nome da cidade de destino), junto com a quantidade de combustível necessária para o veículo percorrê-los.
S */

int main()
{
    int i,j;
    char cidade[5][22];
    float dist[5][5], consumo, qtd;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o nome da cidade: ");
        fgets(cidade[i], 22, stdin);
        cidade[i][strlen(cidade[i]) - 1] = '\0';
    }
    for(i=0; i<5; i++) // Cidades
    {
        for(j=0; j<5; j++) // Distâncias
        {
            if (i == j) 
            {
                dist[i][j] = 0;
            }
            else
            {
                printf("%s --> %s\n", cidade[i], cidade[j]);
                printf("Digite a distância : ", cidade[i]);
                scanf("%f", &dist[i][j]);
            }

        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if (dist[i][j] <= 250 && dist[i][j] > 0)
            {
                printf("Origem: %s | Destino : %s --> Percurso: %.2f\n", cidade[i], cidade[j], dist[i][j]);
            }
        }
    }
    
    printf("Qual é o consumo de combustível do seu veículo: ");
    scanf("%f", &consumo);

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if (i != j)
            {
                qtd = dist[i][j] / consumo;
                printf("Origem: %s --> Destino: %s --> Quantidade de combustível: %.2f\n", cidade[i], cidade[j], qtd);
            }
        }
    }

    system("pause");
    return 0;
}