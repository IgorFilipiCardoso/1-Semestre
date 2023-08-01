/*Construa um programa que calcule a apresente o valor do volume de uma caixa retangular usando a fórmula:
VOLUME = COMPRIMENTO * LARGURA * ALTURA */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int comprimento, largura, altura, volume;

    printf("\n\nDigite o comprimento: ");
    scanf("%d", &comprimento);

    printf("\nDigite a largura: ");
    scanf("%d", &largura);

    printf("\nDigite a altura: ");
    scanf("%d", &altura);

    volume = (comprimento * largura * altura);

    printf("\n\nO volume é %d \n\n", volume);

    return 0;
}
