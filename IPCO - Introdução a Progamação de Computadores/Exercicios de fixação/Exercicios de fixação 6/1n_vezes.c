/*1. Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa. Observe a tela de saída, apresentada a seguir, descubra a lógica da brincadeira e elabore seu programa.*/

#include <stdio.h>

void print(int arg);

int main()
{
    
    int x = 1, n = 0, controle = 0;

    scanf("%d", &n);

    //Estrutura de Repetição
    while (controle < n)
    {
        print(x);
        x++;
        print(x);
        x++;
        print(x);
        x++;
        printf("PUM\n");
        x++;
        controle++;
    }
    

    return 0;
}

void print(int arg)
{
    printf("%d ", arg);
}
