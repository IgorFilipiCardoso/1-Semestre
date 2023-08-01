#include <stdio.h>
#include <math.h>

int main(){
    int rpt, inicio = 4, k;
    int tamanho_matriz, linha, coluna, tamanho_maior_valor;

	scanf("%d", &rpt);

	while (rpt > 0)
	{
		scanf("%d", &tamanho_matriz);

        if (tamanho_matriz > 0)
        {       
            long double matriz[tamanho_matriz][tamanho_matriz], maior;

            for (linha = 0; linha < tamanho_matriz; linha++)
            {
                for (coluna = 0; coluna < tamanho_matriz; coluna++)
                {
                    scanf("%Lf", &matriz[linha][coluna]);

                    matriz[linha][coluna] = matriz[linha][coluna] * matriz[linha][coluna];
                }
            }

            printf("Quadrado da matriz #%d:\n", inicio++);

            for (linha = 0; linha < tamanho_matriz; linha++)
            {	
                for (coluna = 0; coluna < tamanho_matriz; coluna++)
                {
                maior = 0;

                    for (k = 0; k < tamanho_matriz; k++)
                    {
                        if (matriz[k][coluna] > maior){
                            maior = matriz[k][coluna];
                        }
                    }

                    if (maior != 0)
                    {
                        tamanho_maior_valor = ((floor(log10(maior))) + 1);   
                    }
                    
                    else{
                        tamanho_maior_valor = 1;
                    }

                    if (coluna != tamanho_matriz && coluna != 0){
                        printf(" ");
                    }

                    printf("%*.Lf", tamanho_maior_valor, matriz[linha][coluna]);

                }

                printf("\n");
            }

            if (rpt != 1){
                printf("\n");
            }
        }

        rpt--;
	}

    return 0;
}