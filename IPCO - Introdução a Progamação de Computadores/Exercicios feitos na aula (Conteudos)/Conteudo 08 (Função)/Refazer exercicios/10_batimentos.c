#include <stdio.h>

int calc_bat(int id);

int main()
{

    int idade;

    printf("\n\nDigite a sua idade: ");
    scanf("%d", &idade);

    printf("\n\nSe você viver %d anos, seu coração baterá %d vezes.\n", idade, calc_bat(idade));

    return 0;

}

int calc_bat(int id)
{
    return ((((id * 365.25) * 24)* 60) * 60);
}