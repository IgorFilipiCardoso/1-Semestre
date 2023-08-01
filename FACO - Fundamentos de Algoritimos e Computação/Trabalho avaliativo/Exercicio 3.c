#include <stdio.h>

int main(){

    float a[5] = {7.5, 6.5, 6.7, 8.5, 4.0};
    float media = 0;
    float soma = 0;
    int i;

    for(i = 0; i < 5; i++){
        soma += a[i];
    }
    media = soma / 5;

    printf("Media: %.1f \n", media);
    printf("Elementos 10%% acima da media: ");

    for (i = 0; i < 5; i++){
        if (a[i] > media * 1.1){
            printf("%.1f ", a[i]);
        }
    }

    return 0;
}
