/*Desenvolva um programa que receba um número e apresente como resultado o número elevado ao quadrado e o
número elevado ao cubo.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero, n_quadrado, n_cubo;
    
    printf("\n\n Digite um número: ");
    scanf("%d", &numero);

    n_quadrado = (numero * numero);

    n_cubo = (numero * numero * numero);

    printf("\n\n- O número elevado ao quadrado é %d", n_quadrado);
    printf("\n\n- O número elevado ao cubo é %d \n\n", n_cubo);

    return 0;
}
