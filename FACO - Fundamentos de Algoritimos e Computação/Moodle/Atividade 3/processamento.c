/*Dados de entrada: Margem de lucro em porcentagem, o preço de custo e o lucro   mínimo (total).

Processamento: 
preco_venda = preco_custo * ((margem_lucro / 100) + 1)
lucro_minimo_qntd = lucro_minimo / preco_venda

Dados de saída:  Quantidade que deve ser vendida para atingir o lucro mínimo e o preço da venda. 
*/

#include <stdio.h>

float preco_venda_calc (float custo, float margem);
float lucro_min_calc (float custo, float margem, float lucro);

int main()
{
    
    float margem_lucro, preco_custo, lucro_minimo;

    printf("\nDigite a margem de lucro em porcentagem: ");
    scanf("%f", &margem_lucro);

    printf("\nDigite o preço de custo: ");
    scanf("%f", &preco_custo);

    printf("\nDigite o lucro mínimo: ");
    scanf("%f", &lucro_minimo);

    printf("\n\nA quantidade que deve ser vendida para atingir o lucro mínimo é: %.0f", lucro_min_calc(preco_custo, margem_lucro, lucro_minimo));
    printf("\n\nO preço de vende deve ser: %.2f\n\n", preco_venda_calc(preco_custo, margem_lucro));

    return 0;
}

float preco_venda_calc (float custo, float margem){
    return custo * ((margem / 100) + 1);
}

float lucro_min_calc (float custo, float margem, float lucro){
    return lucro / (preco_venda_calc(custo, margem) - custo);
}