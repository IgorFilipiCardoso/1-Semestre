#include <stdio.h>

float totale(float potencia, float tempo);
float valore(float watts_h, float potencia, float tempo);


int main()
{

    float potencia, tempo, watts_h;

    printf("\n\nDigite a potência do refrigerador: ");
    scanf("%f", &potencia);

    printf("\nDigite o tempo que ele permaneceu ligado: ");
    scanf("%f", &tempo);

    printf("\nDigite o valor do quilowatt hora: ");
    scanf("%f", &watts_h);


    printf("\n\nA energia total gasta foi de %.2fKw\n", totale(potencia, tempo));
    printf("\nO valor a ser pago é de R$%.2f\n", valore(watts_h, potencia, tempo));

    return 0;
}

float totale(float potencia, float tempo){

    return (potencia * tempo) / 1000;
}

float valore(float watts_h, float potencia, float tempo){
    return  totale(potencia, tempo) * watts_h;
}