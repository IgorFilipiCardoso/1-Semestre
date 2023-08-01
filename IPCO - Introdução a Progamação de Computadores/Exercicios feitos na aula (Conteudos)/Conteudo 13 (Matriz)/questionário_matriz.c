#include <stdio.h>
#include <string.h>
#define QUESTOES 20

void ler_resposta(char array[]);

int main()
{
    char gabarito[20];
    int conta_acertos;
    int linha, coluna;
    int qnt_alunos;

    printf("Digite o gabarito: \n");
    ler_resposta(gabarito);

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);
    char alunos[qnt_alunos][QUESTOES];

    printf("\nRespostas dos alunos: \n");

    for (linha = 0; linha != qnt_alunos; linha++)
    {
        for (coluna = 0; coluna != QUESTOES; coluna++)
        {
            printf("Aluno %d - Questão %d", linha + 1, coluna + 1);
            scanf("%c", &alunos[linha][coluna]);
            __fpurge(stdin);
        }
    }

    for (linha = 0; linha != qnt_alunos; linha++)
    {
        for (coluna = 0, conta_acertos = 0; coluna != QUESTOES; coluna++)
        {
            if (alunos[linha][coluna] == gabarito[coluna])
            {
                conta_acertos++;
            }
        }
        printf("O aluno %d, acertou %d questões. \n", linha + 1, conta_acertos);
    }

    return 0;
}

void ler_resposta(char array[])
{
    int i;

    for (i = 0; i != QUESTOES; i++)
    {
        printf("\nQuestão[%d]: ", i);
        array[i] = getchar();
    }
}