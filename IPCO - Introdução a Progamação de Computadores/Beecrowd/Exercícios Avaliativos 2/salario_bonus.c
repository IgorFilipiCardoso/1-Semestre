#include <stdio.h>
 
int main() 
{
 
    char nome[25];
    double salario_fixo, total_vendas, total;
    
    scanf("%s", &nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    total = salario_fixo + (total_vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}