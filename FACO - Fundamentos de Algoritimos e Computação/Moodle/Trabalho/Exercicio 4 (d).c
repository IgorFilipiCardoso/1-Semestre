#include <stdio.h>

#define MAX 7
#define TRUE 1
#define FALSE 0

int primo(int numero);
int uniao(int array_x[], int array_y[], int conjunto[], int tamanho);

int main()
{

    int x[MAX] = {0, 1, 3, 4, 6, 9, 11};
    int y[MAX] = {1, 3, 6, 9, 11, 13, 15};
    int conjunto[MAX * 2];
    int tamanho_conjunto = MAX;
    int qnt_primos, i = 0;

    for (i = 0, qnt_primos = 0; i < MAX; i++)
    {
        if (primo(x[i]))
        {
            qnt_primos++;
        }
    }

    printf("\nQuantidade de primos no conjunto X = %d\n\n", qnt_primos);

    
    for (i = 0, qnt_primos = 0; i < MAX; i++)
    {
        if (primo(y[i]))
        {
            qnt_primos++;
        }
    }

    printf("Quantidade de primos no conjunto Y = %d\n\n", qnt_primos);

    tamanho_conjunto = uniao(x, y, conjunto, tamanho_conjunto);

    
    for (i = 0, qnt_primos = 0; i < tamanho_conjunto; i++)
    {
        if (primo(conjunto[i]))
        {
            qnt_primos++;
        }
    }

    printf("Quantidade de primos na uniao dos conjuntos X e Y = %d\n\n", qnt_primos);

    return 0;
}

int primo(int num)
{

    if (num <= 1)
    {
        return FALSE;
    }

    int i = 2;
    while (i * i <= num)
    {
        if (num % i == 0)
        {
            return TRUE;
        }
        i++;
    }

    return TRUE;
}

int uniao(int array_x[], int array_y[], int conjunto[], int tamanho)
{
    int i, count;

    // Colocar o vetor x no conjunto
    for (i = 0; i < MAX; i++)
    {
        conjunto[i] = array_x[i];
    }

    // Verificar se cada elemento do segundo conjunto já está presente na união
    for (i = 0; i < MAX; i++)
    {
        int esta_presente = FALSE;

        count = 0;
        while (count < tamanho && !esta_presente ) // !esta_presente significa não esta presente, ou seja, se esta_presente == False. Da no mesmo.
        {
            if (array_y[i] == conjunto[count])
            {
                esta_presente = TRUE;
            }

            count++;
        }

        if (!esta_presente)
        {
            conjunto[tamanho] = array_y[i];
            tamanho++;
        }
    }

    return tamanho;
}