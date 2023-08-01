#include <stdio.h>

int main()
{
    
    float taxa_dia, taxa_km, dias, km, desc, total;

    desc = 0.1;

    printf("\n\nDigite a taxa fixa por dia: ");
    scanf("%f", &taxa_dia);

    printf("\nDigite a taxa por Km rodado: ");
    scanf("%f", &taxa_km);

    printf("\nDigite a quantidade de dias com o carro: ");
    scanf("%f", &dias);

    printf("\nDigite quantos Km foram andados: ");
    scanf("%f", &km);

    taxa_dia = taxa_dia * dias;

    desc = taxa_dia * 0.1;

    total = (taxa_dia - desc) + (taxa_km * km);

    printf("\n\nO valor total do aluguel é R$%.2f\n", total);
    printf("\nO valor do desconto é de R$%.2f\n", desc);
    printf("\nA Qauntidade de dias com o carro foi de %.0f\n", dias);
    printf("\nFoi andado %.2fKm", km);

    return 0;
}
