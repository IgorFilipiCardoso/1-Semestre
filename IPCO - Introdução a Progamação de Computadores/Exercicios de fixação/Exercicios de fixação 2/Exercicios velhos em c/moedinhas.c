/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um algoritmo para
ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais. Considere que existam moedas
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é
zero.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float um_centavo, cinco_centavos, dez_centavos, vinte_cinco_centavos, cinquenta_centavos, um_real;
    float total_dinheiro = 0;

    printf("\n\nDigite a quantidade de moedas de 1 centavo: ");
    scanf("%f", &um_centavo);
    total_dinheiro = total_dinheiro + um_centavo;

    printf("\n\nDigite a quantidade de moedas de 5 centavo: ");
    scanf("%f", &cinco_centavos);
    total_dinheiro = total_dinheiro + (cinco_centavos * 5);

    printf("\n\nDigite a quantidade de moedas de 10 centavos: ");
    scanf("%f", &dez_centavos);
    total_dinheiro = total_dinheiro + (dez_centavos * 10);

    printf("\n\nDigite a quantidade de moedas de 25 centavos: ");
    scanf("%f", &vinte_cinco_centavos);
    total_dinheiro = total_dinheiro + (vinte_cinco_centavos * 25);

    printf("\n\nDigite a quantidade de moedas de 50 centavos: ");
    scanf("%f", &cinquenta_centavos);
    total_dinheiro = total_dinheiro + (cinquenta_centavos * 50);

    printf("\n\nDigite a quantidade de moedas de 1 real: ");
    scanf("%f", &um_real);
    
    total_dinheiro = (total_dinheiro/100) + um_real;
    
    printf("\n\nO total economizado é de R$%.2f\n\n", total_dinheiro);

    return 0;
}
