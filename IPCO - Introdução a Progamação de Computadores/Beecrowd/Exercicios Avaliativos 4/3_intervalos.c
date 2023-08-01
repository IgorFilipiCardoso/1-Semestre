#include <stdio.h> 

float um_quarto(float num);
float dois_quarto(float num);
float tres_quarto(float num);
float quatro_quartos(float num);

int main()
{
    
    float num;

    scanf("%f", &num);

    if (um_quarto(num))
    {
        printf("Intervalo [0,25]\n");
    }
    else if (dois_quarto(num))
    {
        printf("Intervalo (25,50]\n");
    }
    else if (tres_quarto(num))
    {
        printf("Intervalo (50,75]\n");
    }
    else if (quatro_quartos(num))
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    
    return 0;

}

float um_quarto(float num)
{
    if (num >= 0 && num <= 25)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float dois_quarto(float num)
{
    if (num > 25 && num <= 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float tres_quarto(float num)
{
    if (num > 50 && num <= 75)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float quatro_quartos(float num)
{
    if (num > 75 && num <= 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}