/*Desenvolva um programa que receba um número e apresente como resultado o número elevado ao quadrado e o
número elevado ao cubo.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int numero, resultado;
    
    printf("\n\n Digite um número: ");
    scanf("%d", &numero);

    resultado = (numero * numero);
    printf("\n\n- O número elevado ao quadrado é %d", resultado);

    resultado = (numero * numero * numero);
    printf("\n\n- O número elevado ao cubo é %d \n\n", resultado);

    return 0;
}
