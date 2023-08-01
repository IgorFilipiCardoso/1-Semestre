#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{

    int criancas, contador;
    int i, k, premiado;

    scanf("%d", &criancas);
    scanf("%d", &k);

    int cadeiras[criancas];


    for (i = 0; i != criancas; i++)
    {
        cadeiras[i] == TRUE;
    }
    
    i = 0;
    while (criancas != 0)
    {
        for (contador = 0; contador != k;)
        {
            if (cadeiras[i] == TRUE)
            {
                contador++;
            }

            i++;

            if (i == criancas)
            {
                i = 0;
            }
        }

        cadeiras[i] = FALSE;
        criancas--;
    }

    printf("O sortudo, ou não, foi o da cadeira %d\n", i);

    return 0;
}