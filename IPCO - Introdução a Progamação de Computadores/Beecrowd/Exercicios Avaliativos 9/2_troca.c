/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
*/

#include <stdio.h>

int main(){

    int number[20];
    int i, n;

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 19, n = 0; i >= 0; i--, n++)
    {
        printf("N[%d] = %d\n", n, number[i]);
    }

    return 0;
}