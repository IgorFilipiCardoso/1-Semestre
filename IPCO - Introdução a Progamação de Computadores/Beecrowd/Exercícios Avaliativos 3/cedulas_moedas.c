/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/


#include <stdio.h>

int qnt_notas(int valor, int nota);
int tirar_notas_ant(int valor, int nota);
int qnt_moedas(int valor, float moeda);
int tirar_moedas_ant(int valor, float moeda);

int main()
{

    int valor;
    float valor_tot;
    int moedas;

    scanf("%f", &valor_tot);

    	valor = valor_tot;
        moedas = ((valor_tot - valor) * 100);

    printf("%dNOTAS:\n", moedas);

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


    printf("MOEDAS\n");

    printf("%d moeda(s) de R$ 1.00\n", valor);

    printf("%d moeda(s) de R$ 0.50\n", qnt_moedas(moedas, 0.50));
    moedas = tirar_moedas_ant(moedas, 0.50);

    printf("%d moeda(s) de R$ 0.20\n", qnt_moedas(moedas, 0.25));
    moedas = tirar_moedas_ant(moedas, 0.25);

    printf("%d moeda(s) de R$ 0.10\n", qnt_moedas(moedas, 0.10));
    moedas = tirar_moedas_ant(moedas, 0.10);

    printf("%d moeda(s) de R$ 0.05\n", qnt_moedas(moedas, 0.05));
    moedas = tirar_moedas_ant(valor, 0.05);

    printf("%d moeda(s) de R$ 0.01\n", moedas);


    return 0;
}

int qnt_notas(int valor, int nota){
    return valor / nota;
}

int tirar_notas_ant(int valor, int nota){
    return valor % nota;
}

int tirar_moedas_ant(int valor, float moeda){
    int moedao;
    moedao = (moeda * 100);
    return valor % moedao;
}

int qnt_moedas(int valor, float moeda){
    int moedao;
    moedao = (moeda * 100);
    return valor / moeda;
}



