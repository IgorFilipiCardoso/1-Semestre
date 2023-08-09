#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SIZE 15

int buscar (float key, float data_source[]);

int main()
{

    float dataset[SIZE];
    float num;

    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &dataset[i]);
    }
    
    printf("\n\nDigite o numero a buscar: ");
    scanf("%f", &num);

    if (buscar(num, dataset))
    {
        printf("\n\nValor encontrado!\n\n");
    }
    else
    {
        printf("\n\nValor não encontrado!\n\n");
    }

    return 0;
}

int buscar (float key, float data_source[])
{
    int i = 0;
    int stop = FALSE;

    while (i < SIZE && !stop)
    {
        if (key == data_source[i])
        {
            stop = TRUE;
        }

        i++;
    }

    if (stop)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}