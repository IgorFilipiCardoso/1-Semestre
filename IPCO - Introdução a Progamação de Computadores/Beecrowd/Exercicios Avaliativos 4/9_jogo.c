#include <stdio.h>

int horas_calc(int hora_inicial, int hora_final);

int main()
{
    
    int hora_inicio, hora_final;

    scanf("%d %d", &hora_inicio, &hora_final);

    printf("O JOGO DUROU %d HORA(S)\n", horas_calc(hora_inicio, hora_final));

    return 0;
}

int horas_calc(int hora_inicial, int hora_final)
{

    int horas;

    if (hora_inicial >= hora_final)
    {
        horas = 24 - hora_inicial;
        horas = horas + hora_final;

        return horas;
    }
    else
    {
        horas = hora_final - hora_inicial;

        return horas;
    }
    

    return 0;
}
