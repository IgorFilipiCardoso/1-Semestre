#include <stdio.h>

float din_fumante(int anos, int dias, float maco);

int main()
{
    
    int anos, cigarros_dia;
    float preco_maco;

    printf("\n\nDigite a quantos anos fuma: ");
    scanf("%d", &anos);

    printf("\nDigite a media de cigarros por dia: ");
    scanf("%d", &cigarros_dia);

    printf("\nDigite o preço do maço de cigarro: ");
    scanf("%f", &preco_maco);

    printf("\n\nO valor total gasto foi de R$%.2f\n", din_fumante(anos, cigarros_dia, preco_maco));

    return 0;
}

float din_fumante(int anos, int diasm, float maco)
{
    float din;

    din = ((maco / 20) * diasm) * 30 * 12 * anos;

    return din; 
}