#include <stdio.h>

int main()
{
    
    float dolar, real, per_icms, per_lucro, preco_dolar;

    printf("\n\nDigite o valor em dolar: ");
    scanf("%f", &dolar);

    printf("\nDigite o preço do dolar: ");
    scanf("%f", &preco_dolar);

    printf("\nDigite o percentual do ICMS: ");
    scanf("%f", &per_icms);

    printf("\nDigite o percentual do lucro: ");
    scanf("%f", &per_lucro);

    real = preco_dolar * dolar;

    per_icms = (per_icms/100) * real;
    per_lucro = (per_lucro/100) * real;

    real = real + per_icms + per_lucro;

    printf("\n\nO valor a ser pago é R$%.2f\n", real);

    return 0;
}
