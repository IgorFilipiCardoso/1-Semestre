/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/

#include <stdio.h>

int anos(int idade);
int meses(int idade);
int dias(int idade);


int main()
{
    
    int idade;

    scanf("%d", &idade);

    printf("%d ano(s)\n", anos(idade));
    printf("%d mes(es)\n", meses(idade));
    printf("%d dia(s)\n", dias(idade));

    return 0;
}

int anos(int idade){
    return idade / 365;
}

int meses(int idade){
    return (idade % 365) / 30;
}

int dias(int idade){
    return (idade % 365) % 30;
}