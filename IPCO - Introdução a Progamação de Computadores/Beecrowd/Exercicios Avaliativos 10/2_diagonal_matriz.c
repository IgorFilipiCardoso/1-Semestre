#include <stdio.h>
#define SIZE 12

float soma(float matriz[][SIZE]);
float multiplicacao(float matriz[][SIZE]);

int main()
{

    float matriz[SIZE][SIZE];
    int linhas, colunas;
    char caractere;

    scanf("%c", &caractere);

    for (linhas = 0; linhas < SIZE; linhas++)
    {
        for (colunas = 0; colunas < SIZE; colunas++)
        {
            scanf("%f", &matriz[linhas][colunas]);
        }
    }

    switch (caractere)
    {
    case 'S':
        printf("%.1f\n", soma(matriz));
        break;
    case 'M':
        printf("%.1f\n", multiplicacao(matriz));
        break;
    }

    return 0;
}

float soma(float matriz[][SIZE])
{
    float result = 0;
    int linhas, colunas;

    for (linhas = 0; linhas < SIZE; linhas++)
    {
        for (colunas = SIZE; colunas > (SIZE - linhas); colunas--)
        {
            result += matriz[linhas][colunas-1];
        }
    }

    return result;
}
float multiplicacao(float matriz[][SIZE])
{
    float result = 0;
    int linhas, colunas, count = 0;

    for (linhas = 0; linhas < SIZE; linhas++)
    {
        for (colunas = SIZE; colunas > (SIZE - linhas); colunas--)
        {
            result += matriz[linhas][colunas-1];
            count++;
        }
    }

    result /= count;

    return result;
}
