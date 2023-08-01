#include <stdio.h>


void crescente(float a, float b, float c);
void decrescente(float a, float b, float c);
void maior_meio(float a, float b, float c);


int main()
{
    
    int i;
    float a, b, c;

    printf("\nDigite um numero inteiro, de 1 a 3: ");
    scanf("%d", &i);

    printf("\nDigite um numero: ");
    scanf("%f", &a);

    printf("\nDigite um numero: ");
    scanf("%f", &b);

    printf("\nDigite um numero: ");
    scanf("%f", &c);

    if (i == 1)
    {
        crescente(a, b, c);
    }
    else
    {
        if (i == 2)
        {
            decrescente(a, b, c);
        }
        else
        {
            if (i == 3)
            {
                maior_meio(a, b, c);
            }
            else
            {
                printf("\nHavia dito para digitar um numero entre ou igual a 1 e 3!\n\n");
            }
            
        }
        
    }
}

void crescente(float a, float b, float c)
{

    float trocar_valor;

    if (c > a)
    {
        trocar_valor = a;
        a = c;
        c = trocar_valor;
    }

    if (b > a)
    {
        trocar_valor = a;
        a = b;
        b = trocar_valor;
    }

    if (c > b)
    {
        trocar_valor = b;
        b = c;
        c = trocar_valor;
    }

    printf("Em ordem crescente: %.0f%.0f%.0f\n\n", c, b, a);

}

void decrescente(float a, float b, float c){

    float trocar_valor;

    if (c > a)
    {
        trocar_valor = a;
        a = c;
        c = trocar_valor;
    }

    if (b > a)
    {
        trocar_valor = a;
        a = b;
        b = trocar_valor;
    }

    if (c > b)
    {
        trocar_valor = b;
        b = c;
        c = trocar_valor;
    }

    printf("Em ordem crescente: %.0f%.0f%.0f\n\n", a, b, c);

}

void maior_meio(float a, float b, float c){

        float trocar_valor;

    if (c > a)
    {
        trocar_valor = a;
        a = c;
        c = trocar_valor;
    }

    if (b > a)
    {
        trocar_valor = a;
        a = b;
        b = trocar_valor;
    }

    if (c > b)
    {
        trocar_valor = b;
        b = c;
        c = trocar_valor;
    }

    printf("Em ordem crescente: %.0f%.0f%.0f\n\n", c, a, b);
}