#include <stdio.h>

invertero(num);
int inverter (int numero);
int conferir(int numero, int invertido);
int palin(int num);

int main () {

    int num;

printf("digite o valor: ");
scanf("%d", &num);

if (palin(num) == 1)
{
    printf("Eh palindromo!!");
}
else
{
    printf("Nao eh palindromo!!");
}

return 0;

}

int palin(int num){
    int gra;
    gra = invertero(num);
    return num == gra;
}

invertero(num){
    int d1,d2, d3, d4 ,d5, d6;

    d1 = num / 100000;
    num = num % 100000;

    d2 = num / 10000;
    num = num % 10000;

    d3 = num / 1000;
    num = num % 1000;

    d4 = num / 100;
    num = num % 100;

    d5 = num / 10;

    d6 = num % 10;

    num = d6 * 100000;
    num += d5 * 10000;
    num += d4 * 1000;
    num += d3 * 100;
    num += d2 * 10;
    num += d1;

    return num; 
}
int inverter(int numero){

    int invertido;
    invertido = 0;

    while (numero > 0)
    {
        invertido = (invertido*10) + (numero % 10);
        numero = numero / 10;
    }

    return invertido;

}
int conferir(int numero, int invertido){
    if (numero == invertido){return 1;}
    else {return 0;}
}