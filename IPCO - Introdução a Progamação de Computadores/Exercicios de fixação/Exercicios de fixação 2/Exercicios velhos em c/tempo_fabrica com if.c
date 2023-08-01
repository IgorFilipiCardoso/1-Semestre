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

    if (anos == 0 && meses_resto > 0)
    {
        printf("São %d mesês e %d dias sem acidendentes.", meses_resto, dias_resto);
    }
    else if (anos == 0 && meses_resto == 0)
    {
        printf("São %d dias sem acidendentes.", dias_resto);
    }
    else if (meses_resto > 0 && dias_resto > 0)
    {
        printf("São %d anos, %d mesês e %d dias sem acidendentes.", anos, meses_resto, dias_resto);
    }
    else if (meses_resto == 0 && dias_resto > 0)
    {
        printf("São %d anos e %d dias sem acidendentes.", anos, dias_resto);
    }
    else if (meses_resto > 0 && dias_resto == 0)
    {
        printf("São %d anos e %d meses sem acidendentes.", anos, meses_resto);
    }
    else
    {
        printf("São %d anos sem acidentes.", anos);
    }

    return 0;
}
