#include <stdio.h>
#include <string.h>
#define QUESTOES 20

void ler_resposta(char array[]);

int main()
{
    char gabarito[20];
    char aluno_1[20];
    char aluno_2[20];
    char aluno_3[20];
    int i, conta_acertos;

    printf("Digite o gabarito: \n");
    ler_resposta(gabarito);
    
    printf("\nResposta aluno 1:");
    ler_resposta(aluno_1);

    printf("\nResposta aluno 1:");
    ler_resposta(aluno_2);

    printf("\nResposta aluno 1:");
    ler_resposta(aluno_3);

    for (i = 0, conta_acertos = 0; i < QUESTOES; i++)
    {
        if (gabarito[i] == aluno_1[i])
        {
            conta_acertos++;
        }
    }
    printf("O aluno 1, acertou %d questões.", conta_acertos);

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