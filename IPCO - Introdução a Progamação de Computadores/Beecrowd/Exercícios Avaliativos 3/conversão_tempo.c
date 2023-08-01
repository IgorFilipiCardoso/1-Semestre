/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <stdio.h>

int horas(int seg_total);
int minutos(int seg_total);
int segundos(int seg_total);


int main()
{
    int seg_total;

    scanf("%d", &seg_total);

    printf("%d:%d:%d\n", horas(seg_total), minutos(seg_total), segundos(seg_total));

    return 0;
}

int horas(int seg_total){
    return (seg_total / 60) / 60;
}

int minutos(int seg_total){
    return (seg_total / 60) % 60 ;
}

int segundos(int seg_total){
    return seg_total % 60;
}