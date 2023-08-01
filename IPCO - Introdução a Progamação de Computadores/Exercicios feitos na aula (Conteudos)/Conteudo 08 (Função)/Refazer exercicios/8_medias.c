#include <stdio.h>
#include <math.h>

float aritmetica(float n1, float n2, float n3, float n4);
float quadratica(float n1, float n2, float n3, float n4);
float harmonica(float n1, float n2, float n3, float n4);

int main()
{
    
    float n1 = 1, n2 = 1, n3 = 1, n4 = 1;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);

    printf("\nDigite a quarta nota: ");
    scanf("%f", &n4);

    printf("\n\nA média aritmética é %.2f\n", aritmetica(n1, n2, n3, n4));
    printf("\nA média quadrática é %.2f\n", quadratica(n1, n2, n3, n4));
    printf("\nA média harmônica é %.2f\n", harmonica(n1, n2, n3, n4));

    return 0;
}

float aritmetica(float n1, float n2, float n3, float n4){
    return (n1 + n2 + n3 + n4) / 4;
}

float quadratica(float n1, float n2, float n3, float n4){
    return sqrt((pow(n1, 2) + pow(n2, 2) + pow(n3, 2) + pow(n4, 2)) / 4);
}

float harmonica(float n1, float n2, float n3, float n4){
   return 4 / ((1 / n1) + (1 / n2) + (1 / n3) + (1 / n4));
}
