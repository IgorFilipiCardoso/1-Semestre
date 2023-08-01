#include <stdio.h>


int main()
{

    int x = 0, num, num_maior = 0, num_menor = 2147483647;

    while (x != 15)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > 0 && num < 1001)
        {
            if (num > num_maior)
            {
                num_maior = num;
            }
            if (num < num_menor)
            {
                num_menor = num;
            }
            
            x++;
        }
        else
        {
            printf("------Numero fora do intervalo foi desconsiderado!!------\n");
        }
        
        
    }
    
    printf("\nO maior num digitado foi: %d\n", num_maior);
    printf("\nO menor num digitado foi: %d\n\n", num_menor);
    
    return 0;
}
