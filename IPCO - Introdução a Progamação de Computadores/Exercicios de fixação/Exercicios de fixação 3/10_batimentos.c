#include <stdio.h>

int main()
{

    int idade, baitmentos;

    printf("\n\nDigite a sua idade: ");
    scanf("%d", &idade);

    baitmentos = ((((idade * 365.25) * 24)* 60) * 60);

    printf("\n\nSe você viver %d anos, seu coração baterá %d vezes.\n", idade, baitmentos);

    return 0;

}