/*
1. Desenvolva um programa que leia 4 números inteiros e encontre a média aritmética dos números pares. Crie 2 funções, uma para calcular a média e outra que informe se um número é par ou não. Lembre-se que não existe divisão por zero.
*/


#include <stdio.h>

double calc_media(int a, int b, int c, int d);
float par(int num);
float par1(int num);

int main()
{
    
    int val1, val2, val3 , val4;
    double media;

    scanf("%d", &val1);
    scanf("%d", &val2);
    scanf("%d", &val3);
    scanf("%d", &val4);

    media = calc_media(val1, val2, val3, val4);

    if (media > 0)
    {
        printf("\nMEDIA DOS NUMEROS PARES: %.2lf\n\n", media);
    }
    else
    {
        printf("\nNÃO HÁ NÚMEROS PARES!!\n\n");
    }

    return 0;
}

double calc_media(int a, int b, int c, int d)
{
    double media;

    media = ( par(a) + par(b) + par(c) + par(d)) / (par1(a) + par1(b) + par1(c) + par1(d));

    return media;
}
float par(int num){
    
    if(num % 2 == 0)
    {
        return num;
    }
    else
    {
        return 0;
    }
    
}
float par1(int num){
    if ( num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}