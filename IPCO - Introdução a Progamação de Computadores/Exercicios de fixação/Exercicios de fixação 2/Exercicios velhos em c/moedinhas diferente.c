/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um algoritmo para
ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais. Considere que existam moedas
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é
zero.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float moeda = 0;
    float total_dinheiro = 0;

    printf("\n\nDigite a quantidade de moedas de 1 centavo: ");
    scanf("%f", &moeda);
    total_dinheiro = total_dinheiro + moeda;

    printf("\n\nDigite a quantidade de moedas de 5 centavo: ");
    scanf("%f", &moeda);
    total_dinheiro = total_dinheiro + (moeda * 5);

    printf("\n\nDigite a quantidade de moedas de 10 centavos: ");
    scanf("%f", &moeda);
    total_dinheiro = total_dinheiro + (moeda * 10);

    printf("\n\nDigite a quantidade de moedas de 25 centavos: ");
    scanf("%f", &moeda);
    total_dinheiro = total_dinheiro + (moeda * 25);

    printf("\n\nDigite a quantidade de moedas de 50 centavos: ");
    scanf("%f", &moeda);
    total_dinheiro = total_dinheiro + (moeda * 50);

    printf("\n\nDigite a quantidade de moedas de 1 real: ");
    scanf("%f", &moeda);
    
    total_dinheiro = (total_dinheiro/100) + moeda;
    
    printf("\n\nO total economizado é de R$%.2f\n\n", total_dinheiro);

    return 0;
}
