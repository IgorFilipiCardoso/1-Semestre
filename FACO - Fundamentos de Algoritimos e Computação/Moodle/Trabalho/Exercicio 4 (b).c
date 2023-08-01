#include <stdio.h>
#define TAMANHO 7

int main()
{

    int x[TAMANHO] = {0, 1, 3, 4, 6, 9, 11};
    int y[TAMANHO] = {1, 3, 6, 9, 11, 13, 15};
    int z[TAMANHO];
    int j, i, n;

    for(i=0; i < TAMANHO;i++)
    {
        n=0;
        for(j=0;j < TAMANHO;j++)
        {
            // verifica se na posiçao i o vetor é 
            if(x[i] == y[j])
            {
                n = x[i];
            }else
            {
                z[i] = '\0'; 
            }
        }

        z[i] = n;
    }
    
    printf("CONJUNTO X INTERSECAO Y = { ");

    for (i = 0; i < TAMANHO; i++)
    {
        if(z[i] != '\0')
        printf("%d ", z[i]);
    }

    printf("}\n");

    
    
    return 0;
}