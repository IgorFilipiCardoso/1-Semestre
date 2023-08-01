#include <stdio.h>

int main()
{

    float potencia, tempo, watts_h, total, valor;

    printf("\n\nDigite a potência do refrigerador: ");
    scanf("%f", &potencia);

    printf("\nDigite o tempo que ele permaneceu ligado: ");
    scanf("%f", &tempo);

    printf("\nDigite o valor do quilowatt hora: ");
    scanf("%f", &watts_h);

    total = (potencia * tempo) / 1000;
    valor = total * watts_h;

    printf("\n\nA energia total gasta foi de %.2fKw\n", total);
    printf("\nO valor a ser pago é de R$%.2f\n", valor);

    return 0;
}
