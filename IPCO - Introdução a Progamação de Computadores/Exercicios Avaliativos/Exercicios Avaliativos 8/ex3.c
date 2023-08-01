#include <stdio.h>
#define MAX 100

void moda(int dados[]);

int main()  
{
    int resposta[MAX] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                         4, 5, 6, 1, 6, 5, 7, 8, 7, 7};

    moda(resposta);

    return 0;
}

void moda(int dados[])
{
    int i, j;
    int qnt[100];
    int maior;
    int a_moda;

    for (i = 0; i < 100; i++)
    {
        qnt[i] = 0;
    }

    for (i = 0; i < 100; i++)
    {
        for (j = 1; j < 101; j++)
        {
            if (dados[i] == dados[j])
            {
                qnt[i] = qnt[i] + 1;
            }
        }
    }

    maior = 0;
    for (i = 0; i < 100; i++)
    {
        if (qnt[i] > maior)
        {
            maior = qnt[i];
        }
        
    }

    for (i = 0; i < 100; i++)
    {
        if (qnt[i] == maior)
        {
            a_moda = i;
        }
        
    }
    
    printf("\nA moda e %d, que ocorreu %d vezes.", dados[a_moda], maior);
    
}

