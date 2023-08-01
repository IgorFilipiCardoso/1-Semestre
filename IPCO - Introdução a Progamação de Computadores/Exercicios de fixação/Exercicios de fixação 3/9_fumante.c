#include <stdio.h>

int main()
{
    
    int anos, cigarros_dia;
    float preco_maco, dinheiro_desperdicado;

    printf("\n\nDigite a quantos anos fuma: ");
    scanf("%d", &anos);

    printf("\nDigite a media de cigarros por dia: ");
    scanf("%d", &cigarros_dia);

    printf("\nDigite o preço do maço de cigarro: ");
    scanf("%f", &preco_maco);

    dinheiro_desperdicado = ((preco_maco / 20) * cigarros_dia) * 30 * 12 * anos;

    printf("\n\nO valor total gasto foi de R$%.2f\n", dinheiro_desperdicado);


    return 0;
}
