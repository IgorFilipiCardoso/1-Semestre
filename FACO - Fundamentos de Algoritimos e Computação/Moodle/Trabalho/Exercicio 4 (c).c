#include <stdio.h>

#define MAX 7
#define TRUE 1
#define FALSE 0

int main()
{
    int x[MAX] = {0, 1, 3, 4, 6, 9, 11};
    int y[MAX] = {1, 3, 6, 9, 11, 13, 15};
    int conjunto[MAX * 2]; // Precisa ser o dobro do tamanho, pois precisa conter os dois conjutnos anteriores.
    int tamanho_conjunto = MAX;
    int i, count;

    // Colocar o vetor x no conjunto
    for (i = 0; i < MAX; i++)
    {
        conjunto[i] = x[i];
    }

    // Verificar se cada elemento do segundo conjunto já está presente na união
    for (i = 0; i < MAX; i++)
    {
        int esta_presente = FALSE;

        count = 0;
        while (count < tamanho_conjunto && !esta_presente ) // !esta_presente significa não esta presente, ou seja, se esta_presente == False. Da no mesmo.
        {
            if (y[i] == conjunto[count])
            {
                esta_presente = TRUE;
            }

            count++;
        }

        if (!esta_presente)
        {
            conjunto[tamanho_conjunto] = y[i];
            tamanho_conjunto++;
        }
    }

    printf("\nUniao dos conjuntos = { ");
    for (i = 0; i < tamanho_conjunto; i++)
    {
        printf("%d ", conjunto[i]);
    }
    printf("}\n\n");

    return 0;
}