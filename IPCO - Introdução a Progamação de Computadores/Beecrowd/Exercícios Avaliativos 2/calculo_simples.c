#include <stdio.h>
 
int main() 
{
    
    int cod_1, num_pecas1, cod_2, num_pecas2; 
    float valor1, valor2, valor_total;

    scanf("%d %d %f", &cod_1, &num_pecas1, &valor1);
    scanf("%d %d %f", &cod_2, &num_pecas2, &valor2);

    valor_total = (num_pecas1 * valor1) + (num_pecas2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", valor_total);

    return 0;
}