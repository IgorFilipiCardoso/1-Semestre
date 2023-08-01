/*

Leia o enunciado atentamente, identifique os dados de
entrada, o processamento e a saída. Em seguida:
Escreva um algoritmo que leia o preço unitário (ou por
kg) de cada uma das mercadorias:

No final, calcule e exiba quantos reais gastou cada uma
e escreva quem gastou mais, Ana ou Clara, segundo os
possíveis descontos:

Se comprou mais de 1kg de queijo ou mais de 200g de pão
francês, conceder um desconto de 5% sobre o total da
compra.

Se comprou mais de 1kg de mortadela, conceder um desconto
de 10% no valor total da compra
Obs: os descontos não são cumulativos.


*/
#include <stdio.h>

double calc_compra(double queijo, double mortadela, double presunto, double pao, double queijo_compra, double mortadela_compra,  double presunto_compra, double pao_compra);
double desconto(double comprador, double queijo, double pao, double mortadela);  

int main()
{
    
    double queijo, mortadela, presunto, pao;
    double queijoC1, mortadelaC1, presutoC1, paoC1;
    double queijoC2, mortadelaC2, presutoC2, paoC2;
    double comprador1, comprador2;

    //Ler o preço das compras
    printf("\nDigite o preço do kg do queijo: ");
    scanf("%lf", &queijo);

    printf("\nDigite o preço do kg do presunto: ");
    scanf("%lf", &presunto);

    printf("\nDigite o preço do kg do pao frances: ");
    scanf("%lf", &pao);

    printf("\nDigite o preço do kg da mortadela: ");
    scanf("%lf", &mortadela);

    //Listas de compra de uma
    printf("\nDigite o quanto foi comprado de queijo EM GRAMAS: ");
    scanf("%lf", &queijoC1);

    printf("\nDigite o quanto foi comprado de presunto EM GRAMAS: ");
    scanf("%lf", &presutoC1);

    printf("\nDigite o quanto foi comprado de pao frances EM GRAMAS: ");
    scanf("%lf", &paoC1);

    printf("\nDigite o quanto foi comprado de mortadela EM GRAMAS: ");
    scanf("%lf", &mortadelaC1);

    //Lista de compra da outra
    printf("\nDigite o quanto foi comprado de queijo EM GRAMAS: ");
    scanf("%lf", &queijoC2);

    printf("\nDigite o quanto foi comprado de presunto EM GRAMAS: ");
    scanf("%lf", &presutoC2);

    printf("\nDigite o quanto foi comprado de pao frances EM GRAMAS: ");
    scanf("%lf", &paoC2);

    printf("\nDigite o quanto foi comprado de mortadela EM GRAMAS: ");
    scanf("%lf", &mortadelaC2);


    //Calculo do total da compra de cada um.
    comprador1 = calc_compra(queijo, presunto, pao, mortadela, queijoC1, presutoC1, paoC1, mortadelaC1);
    comprador2 = calc_compra(queijo, presunto, pao, mortadela, queijoC2, presutoC2, paoC2, mortadelaC2);
    
    //Verificação e calculo de descontos
    comprador1 = desconto(comprador1, queijoC1, paoC1, mortadelaC1);  
    comprador2 = desconto(comprador2, queijoC2, paoC2, mortadelaC2);  

    if (comprador1 > comprador2)
    {
        printf("\n\nO comprador 1 (Ana) gastou: R$%.2lf", comprador1);
        printf("\nO comprador 2 (Clara) gastou: R$%.2lf", comprador2);

        printf("\nA Ana gastou mais!!");
    }
    else
    {
        printf("\n\nO comprador 1 (Ana) gastou: R$%.2lf\n", comprador1);
        printf("\nO comprador 2 (Clara) gastou: R$%.2lf\n", comprador2);

        printf("\nA Clara gastou mais!!\n");
    }


    return 0;
}

double calc_compra(double queijo, double presunto, double pao, double mortadela, double queijo_compra, double mortadela_compra,  double presunto_compra, double pao_compra)
{
    double valor_total;

    valor_total = ((queijo_compra / 1000) * queijo) + ((presunto_compra / 1000) * presunto) + ((pao_compra / 1000) * pao) + ((mortadela_compra / 1000) * mortadela);

    return valor_total;
}

double desconto(double comprador, double queijo, double pao, double mortadela)
{
    if (queijo > 1000 || pao > 200)
    {
        return comprador * 0.95;
    }
        else if (mortadela > 1000)
        {
            return comprador * 0.90;
        }
    else
    {
        return comprador;
    }
    
}