/*Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para converter
este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int dias, meses, anos;
    int dias_resto, meses_resto;

    printf("\n\n Digite quantos dias sem acidentes: ");
    scanf("%d", &dias);

    meses = dias / 30;

    anos = meses / 12;

    dias_resto = dias % 30;

    meses_resto = meses % 12;

    printf("\n\n São %d anos, %d meses e %d dias sem acidendentes.\n\n", anos, meses_resto, dias_resto);

    return 0;
}
