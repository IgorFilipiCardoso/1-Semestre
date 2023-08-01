#include <stdio.h>
 
int main() {
    
    int senha = 0, valida = 2002;

    while ((senha) != (valida))
    {
        scanf("%d", &senha);

        if (senha != valida)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
    }
 
    return 0;
}