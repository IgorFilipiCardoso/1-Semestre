#include <stdio.h>

int soma_divisores(int arg);

int main()
{
    
    int arg1 = 1, arg2, x, y = 1;

    while (y != 1000000)
    {
        arg2 = soma_divisores(arg1);

        x = soma_divisores(arg2);

        if ((arg1 == x) && (arg1 != arg2))
        {
            printf("%d e %d são amigaveis!!\n\n", arg1, arg2);

            arg1 = arg2 + 1;
        }

        arg1 = arg1 +1; 
        y = arg2 + 1;
    }
    
    return 0;
}

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