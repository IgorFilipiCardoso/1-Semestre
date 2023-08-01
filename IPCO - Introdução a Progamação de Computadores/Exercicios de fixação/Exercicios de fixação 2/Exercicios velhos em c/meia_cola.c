#include <stdio.h>

int main()  
{

    int lata, garrafinha, garrafa;
    float total_litros;

    printf("\n Digite a quantidade de latas de 350ml:");
    scanf("%d", &lata);

    total_litros = lata * 350;

    printf("\n Digite a quantidade de garrafas de 600ml:");
    scanf("%d", &garrafinha);

    total_litros = total_litros + (garrafinha * 600);

    printf("\n Digite a quantidade de garrafas de 2l:");
    scanf("%d", &garrafa);

    total_litros = total_litros + (garrafa * 2000);
    total_litros = total_litros / 1000;

    printf("\n\n A quantidade de litros é: %.3fL \n\n", total_litros);

    return 0;

}