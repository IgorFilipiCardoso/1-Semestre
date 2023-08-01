#include <stdio.h>

int main()
{

    float cigarros, dinheiro_desperdicado;

    printf("\nDigite o preço do maço de cigarro: ");
    scanf("%f", &cigarros);

    dinheiro_desperdicado = cigarros/20;

    printf("\nDigite a media de cigarros por dia: ");
    scanf("%f", &cigarros);

    dinheiro_desperdicado = dinheiro_desperdicado * cigarros;

    printf("\nDigite a quantos anos fuma: ");
    scanf("%f", &cigarros);

    dinheiro_desperdicado = dinheiro_desperdicado * 30 * 12 * cigarros;

    printf("\n\nO valor total gasto foi de R$%.2f\n", dinheiro_desperdicado);


    return 0;
}
