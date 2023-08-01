#include <stdio.h>

int main()
{
    
    float dia, dia_prom, valor, valor22, valor_prom, ap, ap_prom, rend;

    printf("\n\nDigite o valor da diaria: ");
    scanf("%f", &dia);

    dia_prom = dia * 0.78;
    
    ap = 42 * 0.4;
    ap_prom = 42 * 0.7;

    valor = (dia * ap) * 30;

    valor_prom = (dia_prom * ap_prom) * 8;
    valor22 = (dia * ap) * 22;
    valor_prom = valor_prom + valor22;
    rend = valor_prom - valor;


    printf("\n\nO valor da diaria durante a promoção é R$%.2f;\n", dia_prom);
    printf("\nO valor médio arrecadado sem a promoção, durante um mês é R$%.2f;\n", valor);
    printf("\nO valor médio arrecadado com a promoção, durante um mês é R$%.2f;\n", valor_prom);
    printf("\nO Lucro ou prejuízo da promoção é R$%.2f.\n\n", rend);


    return 0;
}
