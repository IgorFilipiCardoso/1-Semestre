#include <stdio.h>
#define TRUE 1
#define FALSE 0

void creat_matriz(int matriz[][5]);
void type_matriz(int matriz[][5]);
void show_matriz(int matriz[][5]);
int verify(int matriz[][5], int matriz_identidade[][5]);

int main()
{

    int matriz_identidade[5][5];
    int matriz[5][5];
    int i;

    creat_matriz(matriz_identidade);
    type_matriz(matriz);
    show_matriz(matriz_identidade);
    show_matriz(matriz);

    if (verify(matriz, matriz_identidade) == TRUE)
    {
        printf("Sao iguais");
    }
    else
    {
        printf("Nao sao iguais");
    }

    return 0;
}

void creat_matriz(int matriz[][5])
{
    int linhas, colunas;

    // Deixar todo espaço em 0
    for (linhas = 0; linhas != 5; linhas++)
    {
        for (colunas = 0; colunas < 5; colunas++)
        {
            /* Da para usar esse metodo para deixar 1 as colunas e linhas iguais, sem necessidade do proximo for.
            if (colunas == linhas)
            {
                matriz[linhas][colunas] = 1;
            }
            else
            {
                matriz[linhas][colunas] = 0;
            }
            */
            matriz[linhas][colunas] = 0;
        }
    }
    // Trasformar as linhas e colunas inguais em 1
    for (linhas = 0, colunas = 0; linhas < 5; linhas++, colunas++)
    {
        matriz[linhas][colunas] = 1;
    }
}
void type_matriz(int matriz[][5])
{
    int linhas, colunas;

    // Usuario colocar valores na vetor;
    for (linhas = 0; linhas != 5; linhas++)
    {
        for (colunas = 0; colunas < 5; colunas++)
        {
            scanf("%d", &matriz[linhas][colunas]);
        }
    }
    printf("\n");
}
void show_matriz(int matriz[][5])
{
    int linhas, colunas;

    // Mostrar a matriz;
    for (linhas = 0; linhas != 5; linhas++)
    {
        for (colunas = 0; colunas < 5; colunas++)
        {
            printf("%d ", matriz[linhas][colunas]);
        }
        printf("\n");
    }
    printf("\n");
}
int verify(int matriz[][5], int matriz_identidade[][5])
{
    int linhas, colunas, igualdade;

    // Comparar as matrizes.
    for (linhas = 0; linhas != 5 && igualdade != FALSE; linhas++)
    {
        for (colunas = 0; colunas < 5 && igualdade != FALSE; colunas++)
        {
            if (matriz[linhas][colunas] == matriz_identidade[linhas][colunas])
            {
                igualdade = TRUE;
            }
            else
            {
                igualdade = FALSE;
            }
        }
    }

    if (igualdade == TRUE)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}