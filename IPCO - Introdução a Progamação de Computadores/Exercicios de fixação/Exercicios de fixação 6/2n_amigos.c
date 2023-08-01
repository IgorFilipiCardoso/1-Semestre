#include <stdio.h>

int soma_divisores(int arg);

int main()
{
    
    int arg1, arg2, x;

        scanf("%d", &arg1);

        arg2 = soma_divisores(arg1);

        x = soma_divisores(arg2);

        if ((arg1 == x) && (arg1 != arg2))
        {
            printf("\n%d e %d sao amigaveis!!\n", arg1, arg2);
        }
        else
        {
            printf("\n\nComo e inimigo?\n\n");
        }
    
    return 0;
}

//Função para somar os divisores comum.
int soma_divisores(int arg)
{

    int divisor = 1, soma_divisor = 0;

    while (divisor <= (arg/2))
    {
        if ((arg % divisor) == 0)
        {
            soma_divisor = soma_divisor + divisor;
        }

        divisor = divisor + 1;
        
    }

    return soma_divisor;
}