#include <stdio.h>

int main()
{
    
    int num, num_postivo = 2147483647, num_negativo = -2147483647, n, x = 0;

    printf("Digite n: ");
    scanf("%d", &n);

    while ((x < n))
    {

        printf("\n\nDigite um numero inteiro: ");
        scanf("%d", &num);
        
        if (num > 0)
        {
            if (num < num_postivo)
            {
                num_postivo = num;
            }
            
        }
        if (num < 0)
        {
            if (num > num_negativo)
            {
                num_negativo = num;
            }
            
        }

        x++;

    }

    if (num_postivo == 2147483647)
    {
        printf("\n\nO maior numero negativo digitado foi %d\n\n\n", num_negativo);
        printf("\n\nNao foi digita numero positivo!");
    }
    else if (num_negativo == -2147483647)
    {
        printf("\n\nO menor numero postivo digitado foi %d\n\n\n", num_postivo);
        printf("\n\nNao foi digitado numero negativo!");
    }
    else
    {
        printf("\n\nO menor numero postivo digitado foi %d\n\n\n", num_postivo);
        printf("\n\nO maior numero negativo digitado foi %d\n\n\n", num_negativo);
    }
    
    return 0;
}
