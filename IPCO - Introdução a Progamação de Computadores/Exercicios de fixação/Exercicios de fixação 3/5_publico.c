#include <stdio.h>

int main()
{

    int pub;
    float pop, ger, arq, cad, renda;
    
    printf("\n\nDigite a quantidade de público: ");
    scanf("%d", &pub);

    pop = (pub * 0.1);
    ger = (pub * 0.5) * 5;
    arq = (pub * 0.3) * 10;
    cad = (pub * 0.1) * 20;
    renda = pop + ger + arq + cad;

    printf("\n\nNo total a renda foi R$%.2f\n", renda);


    return 0;
}
