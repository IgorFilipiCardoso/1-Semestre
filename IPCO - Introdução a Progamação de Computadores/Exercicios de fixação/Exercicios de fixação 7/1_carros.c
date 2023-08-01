/*
1. Usando estruturas, implemente um programa que armazene placa e velocidade aferida dos veículos que trafegam em uma rodovia. O programa deve calcular a velocidade considerada (7% abaixo da aferida). Ao final apresentar os veículos que estão com excesso de velocidade, e se estiver em excesso, se até 20% ou acima de 20%, para isso considere como máxima a velocidade de 80 km/h.
*/

#include <stdio.h>

struct type_car
{
    int plate;
    float speed;
};

void excess(struct type_car car[], int amount);

int main()
{

    int amount;
    int count;

    printf("Digite quantidade de carros: ");
    scanf("%d", &amount);

    struct type_car car[amount];

    for (count = 0; count < amount; count++)
    {
        printf("\nDigite a placa do carro: ");
        scanf("%d", &car[count].plate);

        printf("\nDigite a velocidade do carro: ");
        scanf("%f", &car[count].speed);

        car[count].speed *= 0.93;
    }

    excess(car, amount);

    return 0;
}

void excess(struct type_car car[], int amount)
{
    int index;

    for (index = 0; index < amount; index++)
    {
        if (car[index].speed > 80)
        {
            if (car[index].speed > 96)
            {
                printf("\nCarro da placa %d esta com um exesso de velocidade acima de 20%%.\n", car[index].plate);
            }
            else
            {
                printf("\nCarro da placa %d esta com um exesso de velocidade em ate 20%%.\n", car[index].plate);
            }
        }
    }
}