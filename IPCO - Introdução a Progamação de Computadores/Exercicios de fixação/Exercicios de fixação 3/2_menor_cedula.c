#include <stdio.h>

int main()
{
    
    int valor, cem, cinquenta, dez, cinco, um;

    printf("\n\nDigite o valor a ser decomposto: ");
    scanf("%d", &valor);

    cem = valor / 100;
    valor = valor - (cem * 100);

    cinquenta = valor / 50;
    valor = valor - (cinquenta * 50);

    dez = valor / 10;
    valor = valor - (dez * 10);

    cinco = valor / 5;
    valor = valor - (cinco * 5);

    um = valor;
    valor = valor - um;

    printf("\nSerá necessária %d notas de 100\n", cem);
    printf("\nSerá necessária %d notas de 50\n", cinquenta);
    printf("\nSerá necessária %d notas de 10\n", dez);
    printf("\nSerá necessária %d notas de 5\n", cinco);
    printf("\nSerá necessária %d notas de 1\n", um);

    return 0;
}
