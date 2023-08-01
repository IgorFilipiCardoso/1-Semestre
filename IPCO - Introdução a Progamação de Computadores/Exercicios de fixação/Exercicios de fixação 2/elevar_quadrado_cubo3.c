/*Desenvolva um programa que receba um número e apresente como resultado o número elevado ao quadrado e o
número elevado ao cubo.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero;
    
    printf("\n\n Digite um número: ");
    scanf("%d", &numero);

    printf("\n\n- O número elevado ao quadrado é %d", numero*numero);
    printf("\n\n- O número elevado ao cubo é %d \n\n", numero*numero*numero);

    return 0;
}
