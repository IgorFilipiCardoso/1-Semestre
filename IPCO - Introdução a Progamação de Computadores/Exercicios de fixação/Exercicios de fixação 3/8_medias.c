#include <stdio.h>
#include <math.h>

int main()
{
    
    float n1 = 1, n2 = 1, n3 = 1, n4 = 1;
    float aritmetica, quadratica, harmonica;
    int total_notas;

    total_notas = n1 + n2 + n3 + n4;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);

    printf("\nDigite a quarta nota: ");
    scanf("%f", &n4);

    aritmetica = (n1 + n2 + n3 + n4) / total_notas;
    quadratica = sqrt((pow(n1, 2) + pow(n2, 2) + pow(n3, 2) + pow(n4, 2)) / total_notas);
    harmonica = total_notas / ((1 / n1) + (1 / n2) + (1 / n3) + (1 / n4));

    printf("\n\nA média aritmética é %.2f\n", aritmetica);
    printf("\nA média quadrática é %.2f\n", quadratica);
    printf("\nA média harmônica é %.2f\n", harmonica);


    return 0;
}
