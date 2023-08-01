/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/


#include <stdio.h>

int qnt_notas(int valor, int nota);
int tirar_notas_ant(int valor, int nota);

int main()
{

    double valor2;

    int valor, moeda;

    scanf("%lf", &valor2);

    valor = valor2;
    moeda = (valor2 - valor) * 100;


    //NOTAS: ------------------
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", qnt_notas(valor, 100));
    valor = tirar_notas_ant(valor, 100);

    printf("%d nota(s) de R$ 50.00\n", qnt_notas(valor, 50));
    valor = tirar_notas_ant(valor, 50);

    printf("%d nota(s) de R$ 20.00\n", qnt_notas(valor, 20));
    valor = tirar_notas_ant(valor, 20);

    printf("%d nota(s) de R$ 10.00\n", qnt_notas(valor, 10));
    valor = tirar_notas_ant(valor, 10);

    printf("%d nota(s) de R$ 5.00\n", qnt_notas(valor, 5));
    valor = tirar_notas_ant(valor, 5);

    printf("%d nota(s) de R$ 2.00\n", qnt_notas(valor, 2));
    valor = tirar_notas_ant(valor, 2);

    //MOEDAS: ----------------
    printf("MOEDAS:\n");


    printf("%d moeda(s) de R$ 1.00\n", valor);

    printf("%d moeda(s) de R$ 0.50\n", qnt_notas(moeda, 50));
    moeda = tirar_notas_ant(moeda, 50);

    printf("%d moeda(s) de R$ 0.25\n", qnt_notas(moeda, 25));
    moeda = tirar_notas_ant(moeda, 25);

    printf("%d moeda(s) de R$ 0.10\n", qnt_notas(moeda, 10));
    moeda = tirar_notas_ant(moeda, 10);

    printf("%d moeda(s) de R$ 0.05\n", qnt_notas(moeda, 5));
    moeda = tirar_notas_ant(moeda, 5);

    printf("%d moeda(s) de R$ 0.01\n", moeda);

    return 0;
}

int qnt_notas(int valor, int nota){
    return valor / nota;
}

int tirar_notas_ant(int valor, int nota){
    return valor - qnt_notas(valor, nota) * nota;
}
