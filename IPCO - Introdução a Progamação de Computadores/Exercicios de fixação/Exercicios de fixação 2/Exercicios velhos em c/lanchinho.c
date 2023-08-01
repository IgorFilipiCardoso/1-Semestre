/*A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    float quantidade = 0, queijo = 0, presunto = 0, hamburguer = 0;

    printf("\n\nDigite a quantidade de sanduiches a fazer: ");
    scanf("%f", &quantidade);

    queijo = (quantidade * 2 * 50)/1000;
    presunto = (quantidade * 50)/1000;
    hamburguer = (quantidade * 100)/1000;

    printf("\n\n- Serão necessários %.2fkg de queijo;", queijo);
    printf("\n\n- Serão necessários %.2fkg de presunto;", presunto);
    printf("\n\n- Serão necessários %.2fkg de hamburguer. \n\n", hamburguer);

    return 0;
}
