#include <stdio.h>

int main()
{

    double fibonacci[500];
    int n, i;
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    fibonacci[2] = 1;

    for (i = 0, n = 2; i < 500; i++, n++)
    {
        fibonacci[n] = fibonacci[n - 1] + fibonacci[n -2];
    }

    while (n != 0)
    {

        printf("Digite um valor entre 1 e 500 para o numero da posicao na sequecia de Fibonacci, para encerrar digite 0: ");
        scanf("%d", &n);

        if (n == 0)
        {printf("Progama encerrado!\n");}
        else if (n > 500 || n < 1)
        {printf("Fora do intervalo!\n");}
        else
        {printf("POSICAO[%d] = %.0lf\n", n, fibonacci[n-1]);}

    }
    
    return 0;
}