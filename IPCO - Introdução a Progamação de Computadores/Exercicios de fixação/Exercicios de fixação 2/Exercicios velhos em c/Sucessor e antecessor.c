#include <stdio.h>

int main()
{

    int numero;
    int sucessor, antecessor;

    printf("\nDigite um número:");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("\n\nO antecessor é: %d\n\nO sucessor é: %d\n\n", antecessor, sucessor);
    
}