#include <stdio.h>

int main()
{
    
    int base, expoente;
    int x = 1, multiplicador;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a expoente: ");
    scanf("%d", &expoente);

    multiplicador = base;

    while (x != expoente)
    {
        base = base * multiplicador;
        x++;
    }
    
    printf("Resultado: %d", base);

    return 0;
}
