#include <stdio.h>

int main()
{

    float vetor[10];
    float menor = 0;
    float x;
    int i;

    printf("Digite os valores do vetor:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%f", &x);

    for (i = 0; i < 10; i++)
    {
        if (x == vetor[i])
        {
            menor = vetor[i] * 0.9;
            printf("Valores 10%% menores que o valor encontrado: ");

            for (i = 0; i < 10; i++)
            {
                if (vetor[i] < menor)
                {
                    printf("%.0f ", vetor[i]);
                }
            }
        }
    }

    if (menor == 0)
    {
        printf("Numero nao encontrado no vetor \n");
    }
    return 0;
}
