/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/
#include <stdio.h>


int main()
{

    int number[1000];
    int i, x = 0, n;

    scanf("%d", &n);
    
    for (i = 0; i < 1000; i++)
    {
        number[i] = x;

            if (x == n - 1)
            {
                x = 0;
            }
            else
            {
                x++;
            }
    }

    for (i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, number[i]);
    }
    
    

    return 0;
}