/*
3. Construa um programa que leia a idade de um nadador e exiba sua categoria segundo as regras: A(5 até 7); B(8 até 10); C(11 até 13); D(14 até 18) e Idade > 18).
*/

#include <stdio.h>

int scanner();

int main()
{
    int idade;
    idade  = scanner();

    if (idade >= 18)
    {
        printf("Categoria E");
    }
    else
    {
        if (idade >= 14 && idade < 18)
        {
            printf("Categoria D");
        }
        else
        {
            if (idade >= 11 && idade <=13)
            {
                printf("Categoria C");
            }
            else
            {
                if (idade >= 8 && idade <= 10)
                {
                    printf("Categoria B");
                }
                else
                {
                    if (idade >= 5 && idade <= 7)
                    {
                        printf("Categoria A");
                    }
                    else
                    {
                        printf("Você não tem idade para participar!");
                    }
                }
            }
        }
    }
    
    


    return 0;
}

int scanner(){
    int valor;
    printf("\nDigite a idade: ");
    scanf("%d", &valor);
    return valor;
}