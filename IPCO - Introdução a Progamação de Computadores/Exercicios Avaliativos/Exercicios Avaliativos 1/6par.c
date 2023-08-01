#include <stdio.h>

int positivos(int a, int b);
int pares(int a, int b);


int main()
{
    
    int a, b;

    printf("\nDigite dois numeros pares: ");
    scanf("%d %d", &a , &b);

    if (positivos(a, b))
    {
        if (pares(a, b))
        {
            printf("\nSim\n");
        }
        else
        {
            printf("\nNão\n");
        }
    }
    else
    {
        printf("Não são números positivos!");
    }

    return 0;
}

int positivos(int a, int b){
    if (a > 0 && b > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int pares(int a, int b){
    if ((a % 2) == 0 && (b % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
