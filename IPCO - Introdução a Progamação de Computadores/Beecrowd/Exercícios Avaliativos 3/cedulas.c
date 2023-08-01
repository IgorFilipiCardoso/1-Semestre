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

int main()
{

    int valor;

    scanf("%d", &valor);

    printf("%d\n", valor);

    printf("%d nota(s) de R$ 100,00\n", qnt_notas(valor, 100));
    valor = tirar_notas_ant(valor, 100);

    printf("%d nota(s) de R$ 50,00\n", qnt_notas(valor, 50));
    valor = tirar_notas_ant(valor, 50);

    printf("%d nota(s) de R$ 20,00\n", qnt_notas(valor, 20));
    valor = tirar_notas_ant(valor, 20);

    printf("%d nota(s) de R$ 10,00\n", qnt_notas(valor, 10));
    valor = tirar_notas_ant(valor, 10);

    printf("%d nota(s) de R$ 5,00\n", qnt_notas(valor, 5));
    valor = tirar_notas_ant(valor, 5);

    printf("%d nota(s) de R$ 2,00\n", qnt_notas(valor, 2));
    valor = tirar_notas_ant(valor, 2);

    printf("%d nota(s) de R$ 1,00\n", valor);

    return 0;
}

int qnt_notas(int valor, int nota){
    return valor / nota;
}

int tirar_notas_ant(int valor, int nota){
    return valor % nota;
}