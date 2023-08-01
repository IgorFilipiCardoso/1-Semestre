#include <stdio.h>

int main(int argc, char const *argv[])
{

    int p, m, g;
    float valor_total;

    printf("\n\n Digite a quantidade de P:");
    scanf("%d", &p);
    valor_total = p * 40;

    printf("\n\n Digite a quantidade de M:");
    scanf("%d", &m);
    valor_total = valor_total + (m * 42);

    printf("\n\n Digite a quantidade de G:");
    scanf("%d", &g);
    valor_total = valor_total + (g * 45);

    printf("\n\n O valor total é: R$%.2f \n\n", valor_total);

    return 0;
}
