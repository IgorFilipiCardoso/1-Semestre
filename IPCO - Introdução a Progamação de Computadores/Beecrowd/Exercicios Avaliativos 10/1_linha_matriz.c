#include <stdio.h>

float soma(float matriz[][12], int row);
float multiplicacao(float matriz[][12], int row);

int main()
{

    float matriz[12][12];
    int row, linhas, colunas;
    char caractere;

    scanf("%d", &row);

    if (row >= 0 && row <= 11)
    {
        scanf(" %c", &caractere);

        for (linhas = 0; linhas < 12; linhas++)
        {
            for (colunas = 0; colunas < 12; colunas++)
            {
                scanf("%f", &matriz[linhas][colunas]);
            }
        }

        switch (caractere)
        {
        case 'S':
            printf("%.1f\n", soma(matriz, row));
            break;
        case 'M':
            printf("%.1f\n", multiplicacao(matriz, row));
            break;
        }
    }

    return 0;
}

float soma(float matriz[][12], int row)
{
    int i;
    int result = 0;

    for (i = 0; i < 12; i++)
    {
        result += matriz[row][i];
    }

    return result;
}
float multiplicacao(float matriz[][12], int row)
{
    int i;
    int result;
    
    for (i = 0; i < 12; i++)
    {
        result += matriz[row][i];
    }

    result /= 12;
    
    return result;
}
