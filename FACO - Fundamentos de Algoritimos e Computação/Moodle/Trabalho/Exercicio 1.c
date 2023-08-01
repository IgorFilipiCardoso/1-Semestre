#include <stdio.h>

int main() {
    int n, i, menor = 0;

    printf("Digite o tamanho do conjunto: ");
    scanf("%d", &n);

    int vetor[n], vetor_multi[n];

    printf("Digite os valores do conjunto:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0 && (i == 0 || vetor[i] < menor)) {
            menor = vetor[i];
        }
    }

    printf("Novo conjunto: ");
    for (i = 0; i < n; i++) {
        vetor_multi[i] = menor * vetor[i];
        printf("%d ", vetor_multi[i]);
    }
    
    return 0;
}
