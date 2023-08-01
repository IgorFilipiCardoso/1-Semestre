/*A granja possui um controle automatizado de cada frango da sua produção. No pé direito do frango há
um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar o tipo de alimento que ele deve
consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para calcular
o gasto total da granja para marcar todos os seus frangos.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    float anel_chip = 4.00, anel_alimento = 3.50;
    float total = 0;
    int frango = 0;

    printf("\n\nDigite a quantidade de frangos: ");
    scanf("%d", &frango);

    total = (frango * anel_chip) + (frango * (anel_alimento * 2));

    printf("\n\nO gasto total da granja para marcar todos os frangos sera R$%.2f.\n\n",  total);

    return 0;
}
