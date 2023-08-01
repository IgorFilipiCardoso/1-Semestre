#include <stdio.h>

float total_calc (float taxa_d, float taxa_km, float km, float dias);
float desc_calc (float dias, float taxa_d);
float taxa_dia_calc (float dias, float taxa_dia);

int main()
{
    
    float taxa_dia, taxa_km, dias, km;

    printf("\n\nDigite a taxa fixa por dia: ");
    scanf("%f", &taxa_dia);

    printf("\nDigite a taxa por Km rodado: ");
    scanf("%f", &taxa_km);

    printf("\nDigite a quantidade de dias com o carro: ");
    scanf("%f", &dias);

    printf("\nDigite quantos Km foram andados: ");
    scanf("%f", &km);


    printf("\n\nO valor total do aluguel é R$%.2f\n", total_calc(taxa_dia, taxa_km, km, dias));
    printf("\nO valor do desconto é de R$%.2f\n", desc_calc(dias, taxa_dia));
    printf("\nA Qauntidade de dias com o carro foi de %.0f\n", dias);
    printf("\nFoi andado %.2fKm", km);

    return 0;
}

float taxa_dia_calc (float dias, float taxa_dia){
    return taxa_dia * dias;
}

float desc_calc (float dias, float taxa_d){
    return taxa_dia_calc(dias, taxa_d) * 0.1;
}

float total_calc (float taxa_d, float taxa_km, float km, float dias){
    return (taxa_dia_calc(dias, taxa_d) - desc_calc(dias, taxa_d)) + (taxa_km * km);
}