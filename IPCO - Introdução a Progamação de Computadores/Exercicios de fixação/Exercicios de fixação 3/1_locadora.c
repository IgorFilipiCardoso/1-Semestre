#include <stdio.h>

int main()
{
    
    float valor;
    int tempo, tempo2, horas;

    printf("\n\nDigite a quantidade de horas: ");
    scanf("%d", &horas);

    tempo = (horas / 3);
    tempo2 = (horas % 3);
    valor = (tempo * 8.50) + (tempo2 * 3.50);

    printf("\n\nUtilização %d horas, pagar R$%.2f.\n", horas, valor);

    return 0;
}
