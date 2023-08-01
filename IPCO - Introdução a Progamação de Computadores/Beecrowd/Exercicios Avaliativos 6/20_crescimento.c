#include <stdio.h>
 
int calculo_anos(int pop_a, int pop_b, double taxa_a, double taxa_b);

int main() {

    int count, i;
    int pop_a, pop_b;
    int anos = 0;
    double taxa_a, taxa_b;

    scanf("%d", &count);
 
    for (i = 0; i < count; i++)
    {

        //Sempre zerar o ano.
        anos = 0;
        
        //População A
        scanf("%d", &pop_a);
        //População B
        scanf("%d", &pop_b);

        //Taxa de crescimento A
        scanf("%lf", &taxa_a);
        //Taxa de crescimento B
        scanf("%lf", &taxa_b);

        //Taxa em porcentagem, para calculos.
        taxa_a /= 100; 
        taxa_b /= 100; 

        anos = calculo_anos(pop_a, pop_b, taxa_a, taxa_b);

        if (anos <= 100)
        {
            printf("%d anos.\n", anos);
        }
    }
    
    return 0;
}

int calculo_anos(int pop_a, int pop_b, double taxa_a, double taxa_b)
{

    int anos = 0;
    int pop_a_anual, pop_b_anual;

    //Enquanto a polulação A menor que a B.
    while (pop_a <= pop_b)
    {
       
        //Sempre aplicar novamente as taxas.
        pop_a_anual = pop_a * taxa_a;
        pop_b_anual = pop_b * taxa_b;

        //Adiciona 1 porção de pessoas a cidade A e B, de acordo com suas taxas.
        pop_a += pop_a_anual;
        pop_b += pop_b_anual;

        //1 ano.
        anos++;

        if (anos > 100)
        {
            printf("Mais de 1 seculo.\n");
            break;
        }

    }

    return anos;
}

