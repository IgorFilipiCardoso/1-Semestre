#include <stdio.h>

int main()
{

    int x[7] = {0, 1, 3, 4, 6, 9, 11};
    int y[7] = {1, 3, 6, 9, 11, 13, 15};
    int soma1 = 0, soma2 = 0, i;

    for (i = 0; i < 7; i++)
    {
        soma1 += x[i];
    }

    for (i = 0; i < 7; i++)
    {
        soma2 += y[i];
    }

    printf("RESULTADO: %d\n", (soma1 * soma2));
    
    return 0;
}