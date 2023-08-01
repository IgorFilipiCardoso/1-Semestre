#include <stdio.h>

float preco_calc(int qnt, float preco);

int main()
{
    
    int cod, qnt;

    scanf("%d %d", &cod, &qnt);

    switch (cod)
    {

    //Cachorro quente
    case 1:
        printf("Total: R$ %.2f\n", preco_calc(qnt, 4.00));
        break;

    //X-Salada
    case 2:
        printf("Total: R$ %.2f\n", preco_calc(qnt, 4.50));
        break;

    //X-Bacon
    case 3:
        printf("Total: R$ %.2f\n", preco_calc(qnt, 5.00));
        break;

    //Torrada simples
    case 4:
        printf("Total: R$ %.2f\n", preco_calc(qnt, 2.00));
        break;

    //Refrigerante
    case 5:
        printf("Total: R$ %.2f\n", preco_calc(qnt, 1.50));
        break;

    }


    return 0;
}

float preco_calc(int qnt, float preco)
{
    return qnt * preco;
}
