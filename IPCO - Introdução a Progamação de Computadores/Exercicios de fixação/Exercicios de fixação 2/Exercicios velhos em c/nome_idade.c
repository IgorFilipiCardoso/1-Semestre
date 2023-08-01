#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int idade, dias;
    char nome[25];

    printf("\n\n Digite o seu nome: ");
    scanf("%s", &nome);

    printf("\n\n Digite a sua idade: ");
    scanf("%d", &idade);

    dias = (idade * 365);

    printf("\n\n %s, você já viveu %d dias. \n\n", nome, dias);

    return 0;
}
