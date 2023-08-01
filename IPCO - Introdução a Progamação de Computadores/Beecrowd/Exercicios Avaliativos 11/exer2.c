#include <stdio.h>

int main() {
    
    int altura, largura, i, maior, valor, resultado;

    scanf("%d%d", &altura, &largura);
    
    do
    {
        scanf("%d", &maior);
        resultado = 0;

        for (i = 1; i < largura; i++)
        {
            scanf("%d", &valor);

            if (maior < valor)
            {
                resultado += valor - maior;
            }
            
            maior = valor;   
        }

        resultado += altura - maior;

        printf("%d\n", resultado);

        scanf("%d%d", &altura, &largura);

    } while (altura != 0 || largura != 0);
    
    return 0;
}