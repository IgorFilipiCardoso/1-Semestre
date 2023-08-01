#include <stdio.h>

int main()
{
    
    int num, num_base;
    char x = 'S';

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    while ((x == 'S') || (x == 's'))
    {
        
        printf("\n\nDigite um numero inteiro: ");
        scanf("%d", &num);

        if (num > num_base)
        {
            num_base = num;
        }

        printf("\n\nPara continuar digite 'S' e para parar 'N' (S/N): ");
        scanf(" %c", &x);

    }

    printf("\n\nO maior numero digitado foi %d\n\n\n", num_base);
    

    return 0;
}
